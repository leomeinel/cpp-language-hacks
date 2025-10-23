/*
 * File: use-expected-hpp.cpp
 * Author: Leopold Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Meinel & contributors
 * SPDX ID: MIT
 * URL: https://opensource.org/licenses/MIT
 * -----
 */

#include "use-expected-hpp.hpp"
#include <expected>
#include <iostream>
#include <random>
#include <sys/types.h>
#include <utility>

// See: https://en.cppreference.com/w/cpp/utility/expected.html
auto get_random_number() -> std::expected<int, parse_error> {
#define START_RANGE 1
#define END_RANGE 2
#define EXPECTED_RETVAL 1
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

void use_expected() {
  if (const auto num = get_random_number(); num.has_value()) {
    std::cout << "Correct number generated: " << *num << "\n";
  } else if (num.error() == parse_error::invalid_random_num) {
    std::cout << "Incorrect number generated: " << *num << "\n";
  } else {
    std::unreachable();
  }
}
