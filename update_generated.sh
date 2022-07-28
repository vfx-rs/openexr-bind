#! /usr/bin/env bash

# exit when any command fails
set -e

# keep track of the last executed command
trap 'last_command=$current_command; current_command=$BASH_COMMAND' DEBUG
# echo an error message before exiting
trap 'echo "\"${last_command}\" exited with code $?."' ERR

project_name="openexr"
major_version=3
minor_version=0
patch_version=5

rm -rf ${project_name}-sys ${project_name}-c

cp -r build/${project_name}-sys .
cp -r build/${project_name}-sys/${project_name}-c .

rm -rf ../${project_name}-sys/*
cp -r build/${project_name}-sys/* ../${project_name}-sys/
