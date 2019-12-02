#include <iostream>
#include <vector>
#include "colors.hh"

int main(int argc, char** argv) {
  Colors c;
  c.m_help(argc, argv);
  int the_weight{0};
  std::string the_color{"NULL"};
  std::string the_content{"NULL"};
  std::string the_args;
  if (argc > 2) {
    std::vector<std::string> arguments(argv + 1, argv + argc);

    for (size_t i = 0; i < arguments.size(); i++) {
      the_args = arguments[i];
      if (the_args.substr(0, 2) == "--") {
        if (the_args == "--bold") {
          the_weight = 1;
        } else {
          the_color = arguments[i];
        }
      } else {
        the_content = the_args;
      }
    }

    if (the_content != "NULL") {
      std::cout << c.colors(&the_color, &the_content, &the_weight) << "\n";
    } else {
      std::cout << "Necessário informar a frase." << "\n";
    }
  } else {
    c.m_dhelp();
  }

  return 0;
}
