/*
 * File: main.cpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
 */

#include "include/use-print-hpp.hpp"

#define OUTPUT "Hello World"

void print_separator();

int main(int argc, char *argv[]) {
  USE_PRINT_HPP::use_print(OUTPUT);
  print_separator();
  USE_PRINT_HPP::use_println((OUTPUT));
  print_separator();
  return 0;
}

#define SEPARATOR "--"
void print_separator() { std::cout << std::endl << SEPARATOR << std::endl; }
