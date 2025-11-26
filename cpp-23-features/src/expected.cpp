/*
 * File: expected.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include "../include/expected.hpp"
#include <expected>
#include <iostream>
#include <random>
#include <sys/types.h>
#include <utility>

namespace {

/**
 * @brief Custom error enum class
 *
 */
enum class parse_error {
  /// An invalid random number has been generated
  invalid_random_num
};

/**
 * @brief Get a random number object within certain limits
 *
 * @return std::expected<int, parse_error> Random number if successful,
 * otherwise an error
 */
auto get_random_number() -> std::expected<int, parse_error> {
  constexpr int START_RANGE = 1;
  constexpr int END_RANGE = 2;
  constexpr int EXPECTED_RETVAL = 1;
  // See: https://cppscripts.com/cpp-random-library
  std::random_device rd;
  std::mt19937 eng(rd());
  std::uniform_int_distribution<> distr(START_RANGE, END_RANGE);

  int retval = distr(eng);
  if (retval != EXPECTED_RETVAL) {
    return std::unexpected(parse_error::invalid_random_num);
  }

  return retval;
}

} // namespace

namespace expected {

// See: https://en.cppreference.com/w/cpp/utility/expected.html
/// @copydoc use_expected()
void use_expected() {
  if (const auto num = get_random_number(); num.has_value()) {
    std::cout << "Correct number generated: " << *num << "\n";
  } else if (num.error() == parse_error::invalid_random_num) {
    std::cout << "Incorrect number generated: " << *num << "\n";
  } else {
    std::unreachable();
  }
}

} // namespace expected
