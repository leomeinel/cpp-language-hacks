/*
 * File: call-println.cpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
 */

#include "call-println.hpp"
#include <print>

void call_println(const std::string &fmt) { std::println("{}", fmt); }
