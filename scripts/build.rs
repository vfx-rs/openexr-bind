fn build_imath() -> std::string::String {
    // We need to set this to Release or else the openexr symlinks will be incorrect.
    // Fixed by
    cmake::Config::new("thirdparty/Imath")
        .profile("Release")
        .define("IMATH_IS_SUBPROJECT", "ON")
        .define("BUILD_TESTING", "OFF")
        .define("BUILD_SHARED_LIBS", "ON")
        .build()
        .to_str()
        .expect("Unable to convert imath_root to str")
        .to_string()
}

fn build_openexr(imath_root: &str) -> std::string::String {
    // We need to set this to Release or else the openexr symlinks will be incorrect.
    // Fixed by
    cmake::Config::new("thirdparty/openexr")
        .define("CMAKE_PREFIX_PATH", &imath_root)
        .profile("Release")
        .define("OPENEXR_IS_SUBPROJECT", "ON")
        .define("BUILD_TESTING", "OFF")
        .define("OPENEXR_INSTALL_EXAMPLES", "OFF")
        .define("BUILD_SHARED_LIBS", "ON")
        .build()
        .to_str()
        .expect("Unable to convert openexr_root to str")
        .to_string()
}

use regex::Regex;
use std::path::Path;

#[derive(Debug)]
struct DylibPathInfo {
    path: String,
    basename: String,
    libname: String,
}

fn is_dylib_path(s: &str, re: &Regex) -> Option<DylibPathInfo> {
    if let Some(m) = re.captures_iter(s).next() {
        if let Some(c0) = m.get(0) {
            if let Some(c1) = m.get(1) {
                return Some(DylibPathInfo {
                    path: s.to_string(),
                    basename: c0.as_str().to_string(),
                    libname: c1.as_str().to_string(),
                });
            }
        }
    }

    None
}

fn get_linking_from_cmake(link_txt_path: &Path) -> Vec<DylibPathInfo> {
    let link_txt = std::fs::read_to_string(link_txt_path).expect(&format!(
        "Could not read link_txt_path: {}",
        link_txt_path.display()
    ));

    let re = Regex::new(
        r"lib([^/]+?)(?:\.dylib|\.so|\.so.\d+|\.so.\d+.\d+|\.so.\d+.\d+.\d+)$",
    )
    .unwrap();

    // Try and figure out what are libraries we want to copy to target.
    // Libraries will end with `.so` or `.so.28.1.0` or `.dylib`
    // God knows for Windows...

    // First, strip off everything up to and including the initial "-o whatever.so"
    let mut link_txt = link_txt.split(' ');
    while let Some(s) = link_txt.next() {
        if s == "-o" {
            // pop off the output lib as well
            let _ = link_txt.next();
            break;
        }
    }

    // Now match all the remaining arguments against a regex looking for
    // shared library paths.
    link_txt.filter_map(|s| is_dylib_path(s, &re)).collect()
}

fn create_symlinks(target_dir: &Path, d: &DylibPathInfo) {
    // If the so isn't versioned, no need to symlink
    if d.basename.ends_with(".so") {
        return;
    }

    // otherwise, check if we've got at least 4 dots...
    if d.basename.matches(".").count() < 4 {
        panic!("so basename has bad number of periods: {}", d.basename);
    }

    // assuming we've got at least 4 dots, then the so is named in the form libLib.so.1.2.3
    // we want to create the following links:
    // libLib.so.1 -> libLib.so.1.2.3
    // libLib.so -> libLib.so.1
    let toks: Vec<&str> = d.basename.split('.').collect();

    let symname = target_dir.join(format!("lib{}.so", &d.libname));
    let symname1 = format!("{}", toks[0..toks.len() - 2].join("."));

    if !target_dir.join(&symname1).exists() {
        std::os::unix::fs::symlink(&d.basename, &target_dir.join(&symname1))
            .unwrap();
    }
    if !symname.exists() {
        std::os::unix::fs::symlink(&symname1, &symname).unwrap();
    }
}

fn main() {
    // If the user has set CMAKE_PREFIX_PATH then we don't want to build the
    // bundled libraries, *unless* they have also set OPENEXR_BUILD_LIBRARIES=1
    let build_libraries = if std::env::var("CMAKE_PREFIX_PATH").is_ok() {
        if let Ok(obl) = std::env::var("OPENEXR_BUILD_LIBRARIES") {
            obl == "1"
        } else {
            false
        }
    } else {
        true
    };

    let clib_name = "PROJECT_NAME-c";
    let clib_versioned_name = "PROJECT_NAME-c-MAJOR_VERSION_MINOR_VERSION";

    let dst = if build_libraries {
        let imath_root = build_imath();
        let openexr_root = build_openexr(&imath_root);
        cmake::Config::new(clib_name)
            .define("CMAKE_EXPORT_COMPILE_COMMANDS", "ON")
            .define(
                "CMAKE_PREFIX_PATH",
                format!("{}/lib/cmake;{}/lib/cmake", imath_root, openexr_root),
            )
            .build()
    } else {
        cmake::Config::new(clib_name)
            .define("CMAKE_EXPORT_COMPILE_COMMANDS", "ON")
            .build()
    };

    let link_txt_path = Path::new(&dst)
        .join("build")
        .join("CMakeFiles")
        .join(format!("{}-shared.dir", clib_versioned_name))
        .join("link.txt");

    let target_dir = dst.parent().unwrap().parent().unwrap().parent().unwrap();
    // println!("cargo:warning=target-dir: {:?}", target_dir.display());

    let dylibs = get_linking_from_cmake(&link_txt_path);
    // println!("cargo:warning=linklibs: {:?}", dylibs);

    // link our wrapper library
    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=static={}", clib_versioned_name);

    if build_libraries {
        // now copy the build dylibs to the top-level target directory and link from
        // there
        println!("cargo:rustc-link-search=native={}", target_dir.display());
        println!("cargo:warning=adding link path {}", target_dir.display());

        for d in dylibs {
            let to = target_dir.join(&d.basename);
            std::fs::copy(&d.path, &to).unwrap();

            // now symlink...
            #[cfg(target_os = "linux")]
            create_symlinks(&target_dir, &d);

            println!("cargo:rustc-link-lib=dylib={}", &d.libname);
            println!("cargo:warning=linking to {}", &d.libname);
        }

        // finally, set LD_LIBRARY_PATH to the target directory when running things
        // from cargo. If you want to install somewhere, you're on your own for now...
        #[cfg(target_os = "linux")]
        println!("cargo:rustc-env=LD_LIBRARY_PATH={}", target_dir.display());
        #[cfg(target_os = "macos")]
        println!("cargo:rustc-env=DYLD_LIBRARY_PATH={}", target_dir.display());
    } else {
        // If we're not building the libraries we don't want to go copying them
        // around, so just link to where CMake found them
        for d in dylibs {
            let libdir = Path::new(&d.path).parent().unwrap();
            println!("cargo:rustc-link-search=native={}", libdir.display());
            println!("cargo:rustc-link-lib=dylib={}", &d.libname);
        }
    }

    #[cfg(target_os = "linux")]
    println!("cargo:rustc-link-lib=dylib=stdc++");
    #[cfg(target_os = "macos")]
    println!("cargo:rustc-link-lib=dylib=c++");
}
