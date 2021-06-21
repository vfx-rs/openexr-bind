cmake -DCMAKE_PREFIX_PATH=/home/luke/packages/openexr_3.0.4 ../

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

fn build_openexr() -> std::string::String {
    if let Ok(openexr_root) = std::env::var("OPENEXR_ROOT") {
        openexr_root
    } else {
        println!("OPENEXR_ROOT is not set, building bundled version.");

        // Build imath if we can't find it.
        let imath_root = build_imath();

        // We need to set this to Release or else the openexr symlinks will be incorrect.
        // Fixed by
        cmake::Config::new("thirdparty/openexr")
            .profile("Release")
            .define("CMAKE_PREFIX_PATH", &imath_root)
            .build()
            .to_str()
            .expect("Unable to convert openexr_root to str").to_string()
    }
}

fn main() {
    let openexr_root = build_openexr();

    // Build openexr-c
    let dst = cmake::Config::new("openexr-c")
        .define(
            "OPENEXR_ROOT",
            &openexr_root,
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
