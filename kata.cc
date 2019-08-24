#include <iostream>

void println(char* line) {
  std::cout << line << std::endl;
}

int main(int argc, char* argv[]) {
  std::cout << "Hello" << " <=" << argc << "=> " << std::endl;
  for (int i = 0; i < argc; i++) {
    println(argv[i]);
  }
}
