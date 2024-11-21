#include <inputString.h>
#include <iostream>
#include "identicalChar.h"
int main()
{
  char* string = kiselev::inputString();
  if (!string)
  {
    std::cerr << "Failed string reading\n";
  }
  const char secondString[] = "abs";
  size_t countIdentical = kiselev::identicalChar(string, secondString);
  std::cout << "Identical character: " << countIdentical << "\n";
  free(string);
  return 0;
}
