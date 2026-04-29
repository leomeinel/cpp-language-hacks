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
