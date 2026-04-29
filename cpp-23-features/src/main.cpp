#include <iostream>

#include "../include/expected.hpp"
#include "../include/print.hpp"

constexpr std::string_view OUTPUT = "Hello World";

namespace
{

  constexpr std::string_view SEPARATOR = "--";

  /**
   * @brief Print separator
   *
   */
  void print_separator()
  {
    std::cout << "\n" << SEPARATOR << "\n";
  }

}  // namespace

/**
 * @brief Main class
 *
 * @param argc Number of arguments
 * @param argv List of arguments
 * @return int Success value
 */
int main(int /*argc*/, char* /*argv*/[])
{
  print::use_print(OUTPUT);
  print_separator();
  print::use_println((OUTPUT));
  print_separator();
  expected::use_expected();
  return 0;
}
