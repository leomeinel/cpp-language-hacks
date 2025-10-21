/*
 * File: use-print-hpp.cpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
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
