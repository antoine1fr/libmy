//
// matrix2.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 15:06:39 2010 antoine luciani
// Last update Sun May  2 02:02:51 2010 antoine luciani
//


#include "matrix2.hpp"

namespace	math
{
  CMatrix2::CMatrix2(unsigned int n11, unsigned int n12,
		     unsigned int n21, unsigned int n22)
  {
    n[0][0] = n11;
    n[0][1] = n12;
    n[1][0] = n21;
    n[1][1] = n22;
  }

  CMatrix2::CMatrix2(const CMatrix2 &mat)
  {
    n[0][0] = mat.n[0][0];
    n[0][1] = mat.n[0][1];
    n[1][0] = mat.n[1][0];
    n[1][1] = mat.n[1][1];
  }

  CMatrix2	&CMatrix2::operator = (const CMatrix2 &mat)
  {
    n[0][0] = mat.n[0][0];
    n[0][1] = mat.n[0][1];
    n[1][0] = mat.n[1][0];
    n[1][1] = mat.n[1][1];
    return (*this);
  }

  std::ostream	&operator << (std::ostream &out,
			      const CMatrix2 &mat)
  {
    out << mat.n[0][0] << '\t';
    out << mat.n[0][1] << '\n';
    out << mat.n[1][0] << '\t';
    out << mat.n[1][1] << '\n';
    return (out);
  }

  std::istream &operator >> (std::istream &in,
			     CMatrix2 &mat)
  {
    in >> mat.n[0][0] >> mat.n[0][1];
    in >> mat.n[1][0] >> mat.n[1][1];
    return (in);
  }
}
