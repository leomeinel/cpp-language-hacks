/*
 * File: use-print-hpp.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include "use-print-hpp.hpp"
#include <iostream>
#include <print>

void use_print(const std::string &fmt) {
  std::cout << "std::print(const std::string &fmt): ";
  std::print("{}", fmt);
};

void use_println(const std::string &fmt) {
  std::cout << "std::println(const std::string &fmt): ";
  std::println("{}", fmt);
}
