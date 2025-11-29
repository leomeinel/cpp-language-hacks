/*
 * File: print.hpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#ifndef PRINT_HPP
#define PRINT_HPP

#include <string_view>

namespace print
{

  /**
   * @brief Use print from standard library
   *
   * @param fmt Format to print
   */
  void use_print(std::string_view text);

  /**
   * @brief Use println from standard library
   *
   * @param text Format to print
   */
  void use_println(std::string_view text);

}  // namespace print

#endif  // PRINT_HPP
