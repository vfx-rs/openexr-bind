#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' EXIT

rm -rf build/ast build/openexr-c build/openexr-sys

astgen bind -v 1 -o build/ast -- \
    -I${OPENEXR_ROOT}/include \
    -I${OPENEXR_ROOT}/include/OpenEXR 

asttoc build/ast -o build -p openexr \
    -major 2 -minor 5 -patch 5 \
    -L $OPENEXR_ROOT/lib \
    -l IlmImf-2_5 \
    -l IlmImfUtil-2_5

cp test.rs build/openexr-sys/src

