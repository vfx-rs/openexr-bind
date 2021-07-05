#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' ERR

rm -rf build

project_name="vfx-pre-openexr"
major_version=0
minor_version=0
patch_version=1

astgen bind -v 1 -u -o build/ast -- \
    -I${IMATH_ROOT}/include \
    -I${IMATH_ROOT}/include/Imath \
    -I${OPENEXR_ROOT}/include \
    -I${OPENEXR_ROOT}/include/OpenEXR 

asttoc build/ast -o build -p ${project_name} \
    -major ${major_version} -minor ${minor_version} -patch ${patch_version} \
    -L $OPENEXR_ROOT/lib \
    -l OpenEXR-3_0 \
    -l OpenEXRUtil-3_0

cp test.rs build/${project_name}-sys/src

