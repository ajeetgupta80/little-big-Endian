#include <iostream>

void LITTLE_OR_BIG() {
  unsigned int i = 1;
  char *c = (char *)&i;

  if (*c) {
    std::cout << "litte endian" << std::endl;
  } else {
    std::cout << "big endian" << std::endl;
  }
}

int main() {
  int t = 1;
  while (t--) {
    LITTLE_OR_BIG();
  }
}
