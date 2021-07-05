fn build_imath() -> std::string::String {
    if let Ok(imath_root) = std::env::var("IMATH_ROOT") {
        imath_root
    } else {
        println!("IMATH_ROOT is not set, building bundled version.");

        // We need to set this to Release or else the openexr symlinks will be incorrect.
        // Fixed by
        cmake::Config::new("thirdparty/Imath")
            .profile("Release")
            .build()
            .to_str()
            .expect("Unable to convert imath_root to str").to_string()
    }
}

fn build_openexr(imath_root: &str) -> std::string::String {
    if let Ok(openexr_root) = std::env::var("OPENEXR_ROOT") {
        openexr_root
    } else {
        println!("OPENEXR_ROOT is not set, building bundled version.");

        // We need to set this to Release or else the openexr symlinks will be incorrect.
        // Fixed by
        cmake::Config::new("thirdparty/openexr")
            .define("CMAKE_PREFIX_PATH", &imath_root)
            .profile("Release")
            .build()
            .to_str()
            .expect("Unable to convert openexr_root to str").to_string()
    }
}

fn main() {
    let imath_root = build_imath();
    let openexr_root = build_openexr(&imath_root);

    // Build openexr-c
    let dst = cmake::Config::new("openexr-c")
        .define(
            "OPENEXR_ROOT",
            &openexr_root,
        )
        .define(
            "IMATH_ROOT",
            &imath_root,
        )
        .build();

    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=dylib=openexr-c-3_0");
    println!(
        "cargo:rustc-link-search=native={}/lib",
        &openexr_root
    );
    println!("cargo:rustc-link-lib=dylib=OpenEXR-3_0");
    println!("cargo:rustc-link-lib=dylib=OpenEXRUtil-3_0");

    #[cfg(target_os = "linux")]
    println!("cargo:rustc-link-lib=dylib=stdc++");
    #[cfg(target_os = "macos")]
    println!("cargo:rustc-link-lib=dylib=c++");
}
