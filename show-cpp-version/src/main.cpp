/*
 * File: main.cpp
 * Author: Leopold Johannes Meinel (leo@meinel.dev)
 * -----
 * Copyright (c) 2025 Leopold Johannes Meinel & contributors
 * SPDX ID: Apache-2.0
 * URL: https://www.apache.org/licenses/LICENSE-2.0
 */

#include <iostream>
#include <map>
#include <string>
#include <utility>

int main(int /*argc*/, char* /*argv*/[])
{
  // INFO: This will not compile for c++98 but it is included for completeness
  const std::map<long, int> CPP_VERSIONS{ { 199711L, 98 }, { 201103L, 11 }, { 201402L, 14 }, { 201703L, 17 },
                                          { 202002L, 20 }, { 202101L, 23 }, { 202302L, 23 } };

  auto iter = CPP_VERSIONS.find(__cplusplus);
  std::string version_text;
  if (iter != CPP_VERSIONS.end())
  {
    version_text = "C++ version: " + std::to_string(iter->second);
  }
  else
  {
    version_text = "Unknown C++ version: " + std::to_string(__cplusplus);
  }
  std::cout << version_text << "\n";

  return 0;
}
