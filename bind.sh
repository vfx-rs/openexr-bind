#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' ERR

rm -rf build

# Generate ast json files from parsing c++ bind files
astgen bind -v 1 -u -o build/ast -- \
    -I${IMATH_ROOT}/include \
    -I${IMATH_ROOT}/include/Imath \
    -I${OPENEXR_ROOT}/include \
    -I${OPENEXR_ROOT}/include/OpenEXR 

# Generate c bindings from parsing json ast
asttoc build/ast -o build -p openexr \
    -major 3 -minor 0 -patch 1 \
    -L $OPENEXR_ROOT/lib \
    -l OpenEXR-3_0 \
    -l OpenEXRUtil-3_0

# Move the actual openexr c++ library source into
# openexr-sys so that it comes bundled with openexr-sys.
mkdir -p build/openexr-sys/thirdparty
cp -r thirdparty/openexr build/openexr-sys/thirdparty/
cp -r thirdparty/Imath build/openexr-sys/thirdparty/

# Copy the tests over
cp test.rs build/openexr-sys/src

