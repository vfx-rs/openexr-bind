use regex::Regex;
use std::path::Path;

const PRJ_NAME: &str = "PROJECT_NAME";
const MJR_VERSION: u32 = MAJOR_VERSION;
const MNR_VERSION: u32 = MINOR_VERSION;

fn build_imath(target_dir: &Path, build_type: &str) -> std::string::String {
    // We need to set this to Release or else the openexr symlinks will be incorrect.
    // Fixed by
    cmake::Config::new("thirdparty/Imath")
        .profile(build_type)
        .define("CMAKE_INSTALL_PREFIX", target_dir.to_str().unwrap())
        .define("IMATH_IS_SUBPROJECT", "ON")
        .define("BUILD_TESTING", "OFF")
        .define("BUILD_SHARED_LIBS", "ON")
        .build()
        .to_str()
        .expect("Unable to convert imath_root to str")
        .to_string()
}

fn build_openexr(target_dir: &Path, build_type: &str) -> std::string::String {
    // We need to set this to Release or else the openexr symlinks will be incorrect.
    // Fixed by
    let cmake_prefix_path = target_dir.join("lib").join("cmake");
    cmake::Config::new("thirdparty/openexr")
        .profile(build_type)
        .define("CMAKE_INSTALL_PREFIX", target_dir.to_str().unwrap())
        .define("CMAKE_PREFIX_PATH", cmake_prefix_path.to_str().unwrap())
        .define("OPENEXR_IS_SUBPROJECT", "ON")
        .define("BUILD_TESTING", "OFF")
        .define("OPENEXR_INSTALL_EXAMPLES", "OFF")
        .define("BUILD_SHARED_LIBS", "ON")
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

#[cfg(not(target_os = "windows"))]
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

#[cfg(target_os = "windows")]
fn get_linking_from_vsproj(
    build_path: &Path,
    clib_versioned_name: &str,
    build_type: &str,
) -> Option<Vec<DylibPathInfo>> {
    use quick_xml::events::{BytesEnd, BytesStart, Event};
    use quick_xml::Reader;
    use std::borrow::Borrow;
    use std::io::Cursor;
    use std::iter;

    let proj_path = build_path.join(format!("{}.vcxproj", clib_versioned_name));
    let proj_xml = std::fs::read_to_string(&proj_path).ok()?;
    println!("cargo:warning=loaded vsproj {}", proj_path.display());

    let re = Regex::new(r"(?:.*\\(.*))(\.lib)$").unwrap();

    let mut reader = Reader::from_str(&proj_xml);
    reader.trim_text(true);

    let mut in_item_definition = false;
    let mut in_link = false;
    let mut in_deps = false;

    let mut buf = Vec::new();

    loop {
        match reader.read_event(&mut buf) {
            Ok(Event::Start(ref e)) => match e.name() {
                b"ItemDefinitionGroup" => {
                    println!("cargo:warning=ItemDefinitionGroup");
                    for attr in e.attributes() {
                        if let Ok(attr) = attr {
                            println!(
                                "cargo:warning=Condition = {:?}",
                                std::str::from_utf8(attr.value.borrow())
                                    .unwrap()
                            );
                            if attr.key == b"Condition" {
                                let s =
                                    std::str::from_utf8(attr.value.borrow())
                                        .unwrap();
                                if s.contains(build_type) {
                                    println!(
                                        "cargo:warning=FDOUND ITEM DEIFNITOIN"
                                    );
                                    in_item_definition = true;
                                }
                            }
                        }
                    }
                }
                b"Link" if in_item_definition => {
                    println!("cargo:warning=  Link");
                    in_link = true;
                }
                b"AdditionalDependencies" if in_item_definition && in_link => {
                    in_deps = true;
                }
                _ => (),
            },
            Ok(Event::End(ref e)) => match e.name() {
                b"ItemDefinitionGroup" => {
                    println!("cargo:warning=/ItemDefinitionGroup");
                    in_item_definition = false;
                }
                b"Link" => {
                    if in_link {
                        println!("cargo:warning=  /Link");
                    }
                    in_link = false;
                }
                b"AdditionalDependencies" => in_deps = false,
                _ => (),
            },
            Ok(Event::Text(e)) if in_deps => {
                let mut dlls = Vec::new();
                for tok in e.unescape_and_decode(&reader).unwrap().split(";") {
                    if let Some(dll) = is_dll_lib_path(tok, &re) {
                        dlls.push(dll)
                    }
                }
                return Some(dlls);
            }
            Ok(Event::Eof) => break,
            Err(e) => panic!("Error parsing vsproj xml"),
            _ => (),
        }
    }

    None
}

#[cfg(target_os = "windows")]
fn get_linking_from_nmake(
    build_path: &Path,
    clib_versioned_name: &str,
) -> Option<Vec<DylibPathInfo>> {
    let build_make_path = build_path
        .join("CMakeFiles")
        .join(format!("{}-shared.dir", clib_versioned_name))
        .join("build.make");

    // For windows we generate an NMake Makefile then we'll parse that here to
    // figure out our linker args
    let build_make = std::fs::read_to_string(&build_make_path).ok()?;

    let re = Regex::new(r"(?:.*\\(.*))(\.lib)$").unwrap();

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

    Some(libs)
}

#[cfg(target_os = "windows")]
fn get_linking_from_cmake(
    build_path: &Path,
    clib_versioned_name: &str,
    build_type: &str,
) -> Vec<DylibPathInfo> {
    if let Some(libs) =
        get_linking_from_vsproj(build_path, clib_versioned_name, build_type)
    {
        libs
    } else if let Some(libs) =
        get_linking_from_nmake(build_path, clib_versioned_name)
    {
        libs
    } else {
        panic!("Could not open either vsproj or nmake build");
    }
}

#[cfg(not(target_os = "windows"))]
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
    let clib_shared_versioned_name =
        format!("{}-c-{}_{}-shared", PRJ_NAME, MJR_VERSION, MNR_VERSION);

    let lib_path = target_dir.join("lib");
    let mut bin_path = target_dir.join("bin");
    let cmake_prefix_path = lib_path.join("cmake");

    #[cfg(not(target_os = "windows"))]
    let generator = "Unix Makefiles";

    #[cfg(target_os = "windows")]
    // let generator = "NMake Makefiles";
    let generator = "Visual Studio 16 2019";

    let build_type =
        if let Ok(build_type) = std::env::var("CPPMM_OPENEXR_BUILD_TYPE") {
            build_type
        } else {
            "Release".to_string()
        };

    let dst = if build_libraries {
        let _ = build_imath(&target_dir, &build_type);
        let _ = build_openexr(&target_dir, &build_type);
        cmake::Config::new(clib_name)
            .define("CMAKE_EXPORT_COMPILE_COMMANDS", "ON")
            .define("CMAKE_PREFIX_PATH", cmake_prefix_path.to_str().unwrap())
            .profile(&build_type)
            .generator(&generator)
            .build()
    } else {
        cmake::Config::new(clib_name)
            .define("CMAKE_EXPORT_COMPILE_COMMANDS", "ON")
            .generator(&generator)
            .profile(&build_type)
            .build()
    };

    let build_path = Path::new(&dst).join("build");

    let dylibs = get_linking_from_cmake(
        &build_path,
        &clib_shared_versioned_name,
        &build_type,
    );
    println!("cargo:warning=linklibs: {:?}", dylibs);

    // link our wrapper library
    println!("cargo:rustc-link-search=native={}", dst.display());
    #[cfg(not(target_os = "windows"))]
    println!("cargo:rustc-link-lib=static={}", clib_versioned_name);
    #[cfg(target_os = "windows")]
    println!("cargo:rustc-link-lib=dylib={}", clib_shared_versioned_name);

    if build_libraries {
        // now copy the build dylibs to the top-level target directory and link from
        // there
        println!("cargo:rustc-link-search=native={}", lib_path.display());
        println!("cargo:warning=adding link path {}", lib_path.display());

        let mut env_path = format!(
            "{};{}",
            std::env::var("PATH").unwrap(),
            bin_path.display()
        );
        for d in dylibs {
            // bung the libdir in anyway in case we've got some other dependencies
            // that need a good linking
            let libdir = Path::new(&d.path).parent().unwrap();
            env_path = format!("{};{}", env_path, libdir.display());
            println!("cargo:rustc-link-search=native={}", libdir.display());
            println!("cargo:rustc-link-lib=dylib={}", &d.libname);
            println!("cargo:warning=linking to {}", &d.libname);
        }
        println!("cargo:warning=path is {}", &env_path);

        // finally, set LD_LIBRARY_PATH to the target directory when running things
        // from cargo. If you want to install somewhere, you're on your own for now...
        #[cfg(target_os = "linux")]
        println!("cargo:rustc-env=LD_LIBRARY_PATH={}", lib_path.display());
        #[cfg(target_os = "macos")]
        println!("cargo:rustc-env=DYLD_LIBRARY_PATH={}", lib_path.display());

        // ...but this doesn't work on Windows so just copy the DLLs to the output directory
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

    // Insert the C++ ABI info
    let output = std::process::Command::new("python")
        .args(&["{1}-c/abigen/insert_abi.py", 
              "src", 
              "src", 
              &format!("{{}}/build/abigen.txt", std::env::var("OUT_DIR").unwrap())])
        .output()
        .expect("Could not launch python insert_abi.py");

    if !output.status.success() {{
        panic!("python insert_abi failed");
    }}

}
