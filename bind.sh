#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' ERR

rm -rf build

project_name="vfxpreopenexr"
major_version=0
minor_version=0
patch_version=1

# Generate ast json files from parsing c++ bind files
astgen bind -v 1 -u -o build/ast -- \
    -I${IMATH_ROOT}/include \
    -I${IMATH_ROOT}/include/Imath \
    -I${OPENEXR_ROOT}/include \
    -I${OPENEXR_ROOT}/include/OpenEXR 

# Generate c bindings from parsing json ast
asttoc build/ast -o build -p ${project_name} \
    -major ${major_version} -minor ${minor_version} -patch ${patch_version} \
    -L $OPENEXR_ROOT/lib \
    -l OpenEXR-3_0 \
    -l OpenEXRUtil-3_0

# Move the actual openexr c++ library source into
# openexr-sys so that it comes bundled with openexr-sys.
mkdir -p build/${project_name}-sys/thirdparty
cp -r thirdparty/openexr build/${project_name}-sys/thirdparty/
cp -r thirdparty/Imath build/${project_name}-sys/thirdparty/
sed s/PROJECT_NAME/${project_name}/g; s/MAJOR_VERSION/${major_version}/g; s/MINOR_VERSION/${minor_version}/g <scripts/build.rs >build/${project_name}-sys/build.rs

# Copy the tests over
cp test.rs build/${project_name}-sys/src

