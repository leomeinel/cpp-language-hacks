/*
 * File: main.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include "include/use-expected-hpp.hpp"
#include "include/use-print-hpp.hpp"
#include <iostream>

#define OUTPUT "Hello World"

void print_separator();

int main(int argc, char *argv[]) {
  USE_PRINT_HPP::use_print(OUTPUT);
  print_separator();
  USE_PRINT_HPP::use_println((OUTPUT));
  print_separator();
  USE_EXPECTED_HPP::use_expected();
  return 0;
}

#define SEPARATOR "--"
void print_separator() { std::cout << "\n" << SEPARATOR << "\n"; }
