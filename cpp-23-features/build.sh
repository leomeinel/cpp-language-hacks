#!/usr/bin/env bash

# Fail on error
set -e

# Set ${SCRIPT_DIR}
SCRIPT_DIR="$(dirname -- "$(readlink -f -- "${0}")")"

# Out of source build
mkdir "${SCRIPT_DIR}"/build || true
cd "${SCRIPT_DIR}"/build
cmake -G Ninja "${SCRIPT_DIR}"
## Use clang++ and build debug build if any cli argument is given, otherwise build release build
cmake -D CMAKE_CXX_COMPILER=clang++ "${SCRIPT_DIR}"
if [[ -z "${1}" ]]; then
    cmake -D CMAKE_BUILD_TYPE=Release "${SCRIPT_DIR}"
else
    cmake -D CMAKE_BUILD_TYPE=Debug "${SCRIPT_DIR}"
fi
cmake --build "${SCRIPT_DIR}"/build
