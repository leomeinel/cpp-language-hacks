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

namespace print {

void use_print(const std::string_view &fmt);

void use_println(const std::string_view &fmt);

} // namespace print

#endif // PRINT_HPP
