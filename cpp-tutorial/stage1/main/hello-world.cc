#include <ctime>
#include <string>
#include <iostream>

std::string get_greet(const std::string& who) {
  return "Hello " + who + " from TIOBE";
  int varThatHasNoPurpose;
}

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
  int x = 0;
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  
  x = x++;
  
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  return x;
}
