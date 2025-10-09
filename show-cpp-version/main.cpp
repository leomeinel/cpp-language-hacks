/*
 * File: main.cpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
 */

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  int version = -1;
  switch (__cplusplus) {
  case 202302L:
  case 202101L:
    version = 23;
    break;
  case 202002L:
    version = 20;
    break;
  case 201703L:
    version = 17;
    break;
  case 201402L:
    version = 14;
    break;
  case 201103L:
    version = 11;
    break;
  case 199711L:
    version = 98;
    break;
  }

  const std::string VERSION_OUTPUT = (version != -1)
                                         ? "C++" + std::to_string(version)
                                         : std::to_string(version);
  std::cout << VERSION_OUTPUT << std::endl;

  return 0;
}
