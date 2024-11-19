#include "matrixDynamicInitiallization.hpp"
#include <fstream>
#include <stdexcept>

void asafov::matrixDynamicInitialization(int* mtx, char* input, int& n, int& m)
{
  std::ifstream fin(input);
  fin >> n;
  fin >> m;
  mtx = new int[n * m];
  for (int i = 0; i < n * m; i++) {
    fin >> mtx[i];
    if (fin.fail() || fin.eof()) {
      throw std::logic_error("err");
    }
  }
  fin.close();
}