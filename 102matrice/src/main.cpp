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
  math::CMatrix2	mat(1, 2, 3, 4);
  math::CVector2	u(2, 10);
  math::CVector2	v;

  v = mat * u;
  std::cout << "mat :\n" << mat << '\n';
  std::cout << "u :\n" << u << '\n';
  std::cout << "v = mat x u:\n" << v << '\n';
  return (0);
}
