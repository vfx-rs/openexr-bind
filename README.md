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

The resulting bindings will be create in `build/openexr-c` and `build/openexr-sys` for the C and Rust bindings, respectively

# Versions
There is a branch for each supported minor version of the target library. Other versions may or may not bind successfully.
