/*
 * File: use-expected-hpp.hpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
 */

#ifndef USE_EXPECTED_HPP
#define USE_EXPECTED_HPP

#include <expected>

// See: https://en.cppreference.com/w/cpp/utility/expected.html
enum class parse_error { invalid_random_num };

void use_expected();

auto get_random_number() -> std::expected<int, parse_error>;

#endif // USE_EXPECTED_HPP
