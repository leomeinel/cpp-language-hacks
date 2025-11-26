/*
 * File: main.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include "../include/expected.hpp"
#include "../include/print.hpp"
#include <iostream>

constexpr std::string_view OUTPUT = "Hello World";
constexpr std::string_view SEPARATOR = "--";

/**
 * @brief Print separator
 *
 */
void print_separator() { std::cout << "\n" << SEPARATOR << "\n"; }

/**
 * @brief Main class
 *
 * @param argc Number of arguments
 * @param argv List of arguments
 * @return int Success value
 */
int main(int argc, char *argv[]) {
  print::use_print(OUTPUT);
  print_separator();
  print::use_println((OUTPUT));
  print_separator();
  expected::use_expected();
  return 0;
}
