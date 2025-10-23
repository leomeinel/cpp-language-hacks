#!/usr/bin/env bash
###
# File: build.sh
# Author: Leopold Meinel (leo@meinel.dev)
# -----
# Copyright (c) 2025 Leopold Meinel & contributors
# SPDX ID: MIT
# URL: https://opensource.org/licenses/MIT
# -----
###

# Fail on error
set -e

# Source config
SCRIPT_DIR="$(dirname -- "$(readlink -f -- "${0}")")"

# Out of source build
mkdir "${SCRIPT_DIR}"/build || true
cd "${SCRIPT_DIR}"/build
cmake "${SCRIPT_DIR}"
cmake --build "${SCRIPT_DIR}"/build
