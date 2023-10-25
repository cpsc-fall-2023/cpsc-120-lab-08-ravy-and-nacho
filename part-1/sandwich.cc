// Ravi Rai
// ravirai@csu.fullerton.edu
// @RaviRai05
// Partners: @k8iekitkat

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments(argv, argv + argc);
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments";
    return -1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiments = arguments[3];
  std::cout << "Your order: \nA " << protein << " sandwich on " << bread
            << " with " << condiments << ".";
  return 0;
}