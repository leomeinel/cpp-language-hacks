/*
 * File: expected.hpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#ifndef EXPECTED_HPP
#define EXPECTED_HPP

namespace {

// See: https://en.cppreference.com/w/cpp/utility/expected.html
enum class parse_error { invalid_random_num };

} // namespace

namespace expected {

void use_expected();

} // namespace expected

#endif // USE_EXPECTED_HPP
