//
// main.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 15:54:08 2010 antoine luciani
// Last update Sun May  2 01:03:01 2010 antoine luciani
//

#include <iostream>

#include "matrix2.hpp"
#include "vector2.hpp"
#include "number.hpp"

int			main()
{
  math::CNumber		Number(2147483647);

  std::cout << "Integer\t: " << Number.GetInteger() << '\n';
  std::cout << "String(2)\t: " << Number.GetInBase(2) << '\n';
  std::cout << "String(10)\t: " << Number.GetInBase(10) << '\n';
  std::cout << "String(16)\t: " << Number.GetInBase(16) << '\n';
  return (0);
}
