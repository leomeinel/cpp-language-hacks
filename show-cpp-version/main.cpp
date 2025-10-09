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
  static int VERSION = -1;
  switch (__cplusplus) {
  case 202101L:
    VERSION = 23;
    break;
  case 202002L:
    VERSION = 20;
    break;
  case 201703L:
    VERSION = 17;
    break;
  case 201402L:
    VERSION = 14;
    break;
  case 201103L:
    VERSION = 11;
    break;
  case 199711L:
    VERSION = 98;
    break;
  }
  static std::string VERSION_OUTPUT = "";
  if (VERSION != -1) {
    VERSION_OUTPUT = "C++" + std::to_string(VERSION);
  } else {
    VERSION_OUTPUT = std::to_string(__cplusplus);
  }
  std::cout << VERSION_OUTPUT;
  std::cout << std::endl;
  return 0;
}
