use cppmm_build::{build, Dependency};

fn main() {
    build(
        "PROJECT_NAME",
        MAJOR_VERSION,
        MINOR_VERSION,
        &vec![
            Dependency {
                name: "zlib",
                definitions: vec![],
            },
            Dependency {
                name: "Imath",
                definitions: vec![
                    ("IMATH_IS_SUBPROJECT", "ON"),
                    ("BUILD_TESTING", "OFF"),
                    ("BUILD_SHARED_LIBS", "ON"),
                ],
            },
            Dependency {
                name: "openexr",
                definitions: vec![
                    ("OPENEXR_IS_SUBPROJECT", "ON"),
                    ("BUILD_TESTING", "OFF"),
                    ("OPENEXR_INSTALL_EXAMPLES", "OFF"),
                    ("BUILD_SHARED_LIBS", "ON"),
                ],
            },
        ],
    );
}

