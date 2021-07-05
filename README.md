# openexr-bind
cppmm bindings for OpenEXR 3.0.x

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
