# OpenEXR
The goal of the bindings are to be official Rust bindings for OpenEXR.
Currently, we target OpenEXR version 3.0.x, but the bindings should support
future versions. The API for OpenEXR should be the same with the C++ code,
unless the C++ API breaks Rust's safety guarantees.

The bindings are automatically generated with cppmm, which takes a definition
file written in C++, and creates a C and Rust interface.

The project has currently only been built and developed with a recent Linux
distribution, but support for CentOS 7, Windows 10, and MacOS are planned.

Currently, the project is owned by the Academy Software Foundation (ASWF) Rust
Working Group, but the project's ownership may be transferred to the OpenEXR
project once the project is mature.

# Checkout
After cloning this module run the following command to clone the openexr and imath submodules.
```bash
git submodule update --init
```

# Generating bindings
First you must have `astgen` and `asttoc` in your PATH.

run `bind.sh`, passing the path to your OpenEXR and Imath installations as environment variables:
```bash
env OPENEXR_ROOT=/path/to/openexr IMATH_ROOT=/path/to/imath ./bind.sh
```

The resulting bindings will be created in `build/openexr-sys` and `build/openexr-sys/openexr-c` for the Rust and C bindings, respectively.

# Building the bindings
The rust bindings can be built from openexr-rs.

```bash
cd openexr-sys
cargo build
```

This builds openexr-sys, openexr-c and openexr and imath.
Specify OPENEXR_ROOT and IMATH_ROOT environment variables to build against
a system install.
```
cd openexr-sys
env OPENEXR_ROOT=/path/to/openexr IMATH_ROOT=/path/to/imath cargo build
```

# Versions
There is a branch for each supported minor version of the target library. Other versions may or may not bind successfully.

# Contributing

Please see [the contributions document](CONTRIBUTING.md) for more information.

# Building

## Dev Container

We support and do most of our development using Visual Studio Code's [remote containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers). If you have the latest Docker, VSCode, and the remote containers plugin installed, then you should be able to develop in the container by following the documentation above.

## Generic

1. Install dependencies
2. Compile OpenEXR v3.0.1.
3. Compile cppmm, making sure to include the system's `stdint.h` in the `cppmm/astgen/resources` folder.
4. Make sure that OpenEXR is in the library path, cppmm in the `PATH`, and `IMATH_ROOT` and `OPENEXR_ROOT` are both pointing to the folder where OpenEXR was compiled to.
5. cd openexr-bind folder and run the `bind.sh` script.
6. cd into the openexr-rs folder and run cargo commands as needed. We recommend running `cargo test` to make sure everything is set up.

## Ubuntu 20.04

1. Install dependencies
    ```bash
    apt install -y \
        build-essential \
        git \
        make \
        g++ \
        python3 \
        curl \
        clang-11 \
        libclang-11-dev \
        gdb \
        lldb-11 \
        pkg-config \
        libssl-dev \
        cmake
    ```
2. Compile OpenEXR
    ```bash
    mkdir -p /tmp/openexr && \
    cd /tmp/openexr && \
    curl -L https://github.com/AcademySoftwareFoundation/openexr/archive/refs/tags/v3.0.1.tar.gz | tar -xvz && \
    cd openexr-3.0.1 && \
    mkdir build && \
    cd build && \
    cmake ../ \
        -DCMAKE_CXX_STANDARD=11 && \
    make -j $(nproc) && \
    make install && \
    rm -rf /tmp/openexr
    ```
3. Compile cppmm
    ```bash
    export SPD_LOG_COMMIT_ID=233e97c5e46d8f8e83a6ea06b2dc8db804a4aed4 && \
    export JSON_COMMIT_ID=27b44cb17be3b709437f724e9e350e5fa95d0049 && \
    export FMT_COMMIT_ID=58aa04573f6fab54dd998183d333bf9d630843ee && \
    export CPPMM_COMMIT_ID=7bbf291aa465b50f9c64bfac8ca3a3b98b34bf38 && \
    mkdir -p /tmp/cppmm && \
    cd /tmp/cppmm && \
    curl -L https://github.com/gabime/spdlog/archive/${SPD_LOG_COMMIT_ID}.tar.gz | tar -xvz && \
    curl -L https://github.com/nlohmann/json/archive/${JSON_COMMIT_ID}.tar.gz | tar -xvz && \
    curl -L https://github.com/fmtlib/fmt/archive/${FMT_COMMIT_ID}.tar.gz | tar -xvz && \
    curl -L https://github.com/vfx-rs/cppmm/archive/${CPPMM_COMMIT_ID}.tar.gz | tar -xvz && \
    mv spdlog-${SPD_LOG_COMMIT_ID}/* cppmm-${CPPMM_COMMIT_ID}/spdlog/ && \
    mv json-${JSON_COMMIT_ID}/* cppmm-${CPPMM_COMMIT_ID}/json/ && \
    mv fmt-${FMT_COMMIT_ID}/* cppmm-${CPPMM_COMMIT_ID}/asttoc/fmt/ && \
    cd cppmm-${CPPMM_COMMIT_ID} && \
    cd astgen/ && \
    cp /usr/include/stdint.h resources/stdint.h && \
    ./bake_resources.py && \
    cd ../ && \
    mkdir build && \
    cd build && \
    LLVM_ROOT=/usr/local cmake ../ && \
    make -j $(nproc) && \
    make install && \
    rm -rf /tmp/cppmm
    ```
4. Set the environment variables `LD_LIBRARY_PATH=/usr/local/lib:/usr/local/lib64:$LD_LIBRARY_PATH`, `IMATH_ROOT=/usr/local`, and `OPENEXR_ROOT=/usr/local`.
5. Follow the generic install method.
