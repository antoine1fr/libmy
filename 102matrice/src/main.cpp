//
// main.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 15:54:08 2010 antoine luciani
// Last update Sat May  1 17:57:57 2010 antoine luciani
//

#include <iostream>
#include "matrix2.hpp"
#include "vector2.hpp"

int			main()
{
  math::CMatrix2	mat1(1, 2, 3, 4);
  math::CMatrix2	mat2(mat1);
  math::CMatrix2	mat3;
  math::CVector2	v(1, 2);

  std::cout << mat1 << '\n';
  std::cout << mat2 << '\n';
  mat3 = (mat1 * mat2) * 100;
  std::cout << mat3 << '\n';
  std::cout << v << '\n';
  return (0);
}
