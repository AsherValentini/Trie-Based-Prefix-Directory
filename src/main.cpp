#include <iostream>

#include "prefix_directory.hpp"

int main() {

  auto dir = std::make_unique<Directory>();

  dir->insert("hello");
  dir->insert("chatGPT4o");
  if (dir->search("hello")) {
    std::cout << "hello was found in directory" << std::endl;
  } else {
    std::cout << "error" << std::endl;
  }

  if (dir->search("NA")) {
    std::cout << "error" << std::endl;
  } else {
    std::cout << "NA is not in directory" << std::endl;
  }

  if (dir->startsWith("he")) {
    std::cout << "yes there are words that start with he" << std::endl;
  } else {
    std::cout << "erro: no words that start with HE " << std::endl;
  }

  return 0;
}

