#include <iostream>
#include <math.h>
#include <string>

#define nline endl

class endian {
public:
  void LITTLE_OR_BIG();
};

void endian::LITTLE_OR_BIG() {
  unsigned int i = 1;
  char *c = (char *)&i;

  if (*c) {
    std::cout << "litte endian" << std::endl;
  } else {
    std::cout << "big endian" << std::endl;
  }
}

int main() {
  endian end;
  int t = 1;
  while (t--) {
    end.LITTLE_OR_BIG();
  }
}
