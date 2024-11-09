#include <fstream>
#include <stdexcept>
#include "func.hpp"

void matrixAutoInitialization(int* mtx, char* input, int& n, int& m)
{
  std::ifstream fin(input);
  fin >> n;
  fin >> m;
  for (int i = 0; i < n * m; i++) {
    fin >> mtx[i];
    if (fin.fail() || fin.eof()) {
      throw std::logic_error("err");
    }
  }
  fin.close();
}