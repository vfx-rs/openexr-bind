FROM ubuntu:20.04

# System setup
RUN sed -Ei 's/^# deb-src /deb-src /' /etc/apt/sources.list && \
    apt update && \
    DEBIAN_FRONTEND="noninteractive" apt install -y \
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
    libssl-dev && \
    DEBIAN_FRONTEND="noninteractive" apt build-dep -y cmake

# Install Rust
ENV RUSTUP_HOME=/usr/local/rustup \
    CARGO_HOME=/usr/local/cargo \
    PATH=/usr/local/cargo/bin:$PATH \
    RUST_VERSION=1.52.1 \
    RUST_ARCH=x86_64-unknown-linux-gnu
RUN curl -O "https://static.rust-lang.org/rustup/archive/1.24.1/${RUST_ARCH}/rustup-init" && \
    chmod +x rustup-init && \
    ./rustup-init -y --no-modify-path --profile default --default-toolchain $RUST_VERSION --default-host ${RUST_ARCH} && \
    rm rustup-init && \
    chmod -R a+w $RUSTUP_HOME $CARGO_HOME && \
    rustup --version && \
    cargo --version && \
    rustc --version

# Compile CMake
RUN mkdir -p /tmp/cmake && \
    cd /tmp/cmake && \
    curl -L https://github.com/Kitware/CMake/releases/download/v3.20.2/cmake-3.20.2.tar.gz | tar -xvz && \
    cd cmake-3.20.2 && \
    ./bootstrap && \
    make -j $(nproc) && \
    make install && \
    rm -rf /tmp/cmake

# Compile OpenEXR
RUN mkdir -p /tmp/openexr && \
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
ENV IMATH_ROOT=/usr/local \
    OPENEXR_ROOT=/usr/local

# Compile CPPMM
ENV SPD_LOG_COMMIT_ID=233e97c5e46d8f8e83a6ea06b2dc8db804a4aed4 \
    JSON_COMMIT_ID=27b44cb17be3b709437f724e9e350e5fa95d0049 \
    FMT_COMMIT_ID=58aa04573f6fab54dd998183d333bf9d630843ee \
    CPPMM_COMMIT_ID=7bbf291aa465b50f9c64bfac8ca3a3b98b34bf38
# GitHub doesn't include the submodules in the archive by default. Need to manually download them.
RUN mkdir -p /tmp/cppmm && \
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

ENV LD_LIBRARY_PATH=/usr/local/lib:/usr/local/lib64:$LD_LIBRARY_PATH

# Get useful tools
RUN cargo install cargo-edit
