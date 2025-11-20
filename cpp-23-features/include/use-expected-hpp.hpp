/*
 * File: use-expected-hpp.hpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#ifndef USE_EXPECTED_HPP
#define USE_EXPECTED_HPP

#include <expected>

// See: https://en.cppreference.com/w/cpp/utility/expected.html
enum class parse_error { invalid_random_num };

void use_expected();

auto get_random_number() -> std::expected<int, parse_error>;

#endif // USE_EXPECTED_HPP
