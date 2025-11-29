/*
 * File: print.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include "../include/print.hpp"

#include <iostream>
#include <print>

namespace print
{

  /// @copydoc use_print(const std::string_view &)
  void use_print(std::string_view text)
  {
    std::cout << "std::print(): ";
    std::print("{}", text);
  };

  /// @copydoc use_println(const std::string_view &)
  void use_println(std::string_view text)
  {
    std::cout << "std::println(): ";
    std::println("{}", text);
  }

}  // namespace print
