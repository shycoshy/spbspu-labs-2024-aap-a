#include "matrix.h"
#include <istream>
#include <cstddef>
void bocharov::output_matrix(std::ostream & out, const int * const matrix, size_t m, size_t n)
{
  out << m << " " << n;
  for (size_t i = 0; i < (m * n); i++)
  {
    out << " " << matrix[i];
  }
}
