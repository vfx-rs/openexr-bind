use regex::Regex;
use std::path::Path;

const PRJ_NAME: &str = "PROJECT_NAME";
const MJR_VERSION: u32 = MAJOR_VERSION;
const MNR_VERSION: u32 = MINOR_VERSION;

fn build_imath(target_dir: &Path) -> std::string::String {
    // We need to set this to Release or else the openexr symlinks will be incorrect.
    // Fixed by
    cmake::Config::new("thirdparty/Imath")
        .profile("Release")
        .define("CMAKE_INSTALL_PREFIX", target_dir.to_str().unwrap())
        .define("IMATH_IS_SUBPROJECT", "ON")
        .define("BUILD_TESTING", "OFF")
        .define("BUILD_SHARED_LIBS", "ON")
        .generator("Ninja")
        .build()
        .to_str()
        .expect("Unable to convert imath_root to str")
        .to_string()
}

fn build_openexr(target_dir: &Path) -> std::string::String {
    // We need to set this to Release or else the openexr symlinks will be incorrect.
    // Fixed by
    let cmake_prefix_path = target_dir.join("lib").join("cmake");
    cmake::Config::new("thirdparty/openexr")
        .profile("Release")
        .define("CMAKE_INSTALL_PREFIX", target_dir.to_str().unwrap())
        .define("CMAKE_PREFIX_PATH", cmake_prefix_path.to_str().unwrap())
        .define("OPENEXR_IS_SUBPROJECT", "ON")
        .define("BUILD_TESTING", "OFF")
        .define("OPENEXR_INSTALL_EXAMPLES", "OFF")
        .define("BUILD_SHARED_LIBS", "ON")
        .generator("Ninja")
        .build()
        .to_str()
        .expect("Unable to convert openexr_root to str")
        .to_string()
}

#[derive(Debug)]
struct DylibPathInfo {
    path: String,
    basename: String,
    libname: String,
}

#[cfg(not(target_os="windows"))]
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

#[cfg(target_os="windows")]
fn is_dll_lib_path(s: &str, re: &Regex) -> Option<DylibPathInfo> {
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

#[cfg(target_os="windows")]
fn get_linking_from_cmake(link_txt_path: &Path) -> Vec<DylibPathInfo> {
    let build_make_path = link_txt_path.join("build.make");
    
    // For windows we generate an NMake Makefile then we'll parse that here to
    // figure out our linker args
    let build_make = std::fs::read_to_string(&build_make_path).expect(&format!(
        "Could not read link_txt_path: {}",
        build_make_path.display()
    ));

    let re = Regex::new(
        r"(?:.*\\(.*))(\.lib)$",
    )
    .unwrap();

    let mut found_slash_dll = false;
    let mut libs = Vec::new();
    println!("cargo:warning=Found links:");
    for tok in build_make.split_whitespace() {
        if tok == "/dll" {
            found_slash_dll = true;
        } else if found_slash_dll {
            if tok == "<<" {
                break;
            } else {
                if let Some(dlp) = is_dll_lib_path(tok, &re) {
                    libs.push(dlp);
                }
            }
        }
    }

    libs
}

#[cfg(not(target_os="windows"))]
fn get_linking_from_cmake(link_txt_path: &Path) -> Vec<DylibPathInfo> {
    let link_txt_path = link_txt_path.join("link.txt");
    let link_txt = std::fs::read_to_string(&link_txt_path).expect(&format!(
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

    let out_dir = std::env::var("OUT_DIR").unwrap();
    println!("cargo:warning=out dir is {}", out_dir);
    let target_dir = Path::new(&out_dir).ancestors().skip(3).next().unwrap();
    println!("cargo:warning=target dir is {}", target_dir.display());

    let clib_name = format!("{}-c", PRJ_NAME);
    let clib_versioned_name =
        format!("{}-c-{}_{}", PRJ_NAME, MJR_VERSION, MNR_VERSION);

    let lib_path = target_dir.join("lib");
    let cmake_prefix_path = lib_path.join("cmake");

    #[cfg(not(target_os="windows"))]
    let generator = "Unix Makefiles";

    #[cfg(target_os="windows")]
    let generator = "NMake Makefiles";

    let dst = if build_libraries {
        let _ = build_imath(&target_dir);
        let _ = build_openexr(&target_dir);
        cmake::Config::new(clib_name)
            .define("CMAKE_EXPORT_COMPILE_COMMANDS", "ON")
            .define("CMAKE_PREFIX_PATH", cmake_prefix_path.to_str().unwrap())
            .profile("Release")
            .generator(&generator)
            .build()
    } else {
        cmake::Config::new(clib_name)
            .define("CMAKE_EXPORT_COMPILE_COMMANDS", "ON")
            .generator(&generator)
            .profile("Release")
            .build()
    };

    let link_txt_path = Path::new(&dst)
        .join("build")
        .join("CMakeFiles")
        .join(format!("{}-shared.dir", clib_versioned_name));

    let dylibs = get_linking_from_cmake(&link_txt_path);
    println!("cargo:warning=linklibs: {:?}", dylibs);

    // link our wrapper library
    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=static={}", clib_versioned_name);

    if build_libraries {
        // now copy the build dylibs to the top-level target directory and link from
        // there
        println!("cargo:rustc-link-search=native={}", lib_path.display());
        println!("cargo:warning=adding link path {}", lib_path.display());

        for d in dylibs {
            println!("cargo:rustc-link-lib=dylib={}", &d.libname);
            println!("cargo:warning=linking to {}", &d.libname);
        }

        // finally, set LD_LIBRARY_PATH to the target directory when running things
        // from cargo. If you want to install somewhere, you're on your own for now...
        #[cfg(target_os = "linux")]
        println!("cargo:rustc-env=LD_LIBRARY_PATH={}", lib_path.display());
        #[cfg(target_os = "macos")]
        println!("cargo:rustc-env=DYLD_LIBRARY_PATH={}", lib_path.display());
    } else {
        // If we're not building the libraries we don't want to go copying them
        // around, so just link to where CMake found them
        for d in dylibs {
            let libdir = Path::new(&d.path).parent().unwrap();
            println!("cargo:rustc-link-search=native={}", libdir.display());
            println!("cargo:rustc-link-lib=dylib={}", &d.libname);
            println!("cargo:warning=linking to {}", &d.libname);
        }
    }

    #[cfg(target_os = "linux")]
    println!("cargo:rustc-link-lib=dylib=stdc++");
    #[cfg(target_os = "macos")]
    println!("cargo:rustc-link-lib=dylib=c++");
}
