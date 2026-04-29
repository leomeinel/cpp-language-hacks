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
