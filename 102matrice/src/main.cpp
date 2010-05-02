//
// main.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 15:54:08 2010 antoine luciani
// Last update Sun May  2 13:58:51 2010 antoine luciani
//

#include <iostream>
#include <vector>
#include <sstream>
#include <stdexcept>

#include "option_functors.hpp"

void	PrintDoc()
{
  std::cout << "Usage :\n";
  std::cout << "\t./102matrice 1 base a11 a12 a21 a22 b11 b12 b21 b22\n";
  std::cout << "\t./102matrice 2 base p m11 m12 m21 m22\n";
  std::cout << "\t./102matrice 3 base m11 m12 m21 m22 x y\n";
  std::cout << "\t./102matrice 4 base a11 a12 a21 a22 b11 b12 b21 b22\n";
}

void	InitApp(std::vector<COptionFunctor *> &v)
{
  v.push_back(new COption1Functor);
}

int				main(int argc, char **argv)
{
  std::vector<COptionFunctor *>			vOptions;
  std::vector<COptionFunctor *>::size_type	nOption;
  std::istringstream				Stream;

  if (argc < 2)
    {
      PrintDoc();
      return (EXIT_FAILURE);
    }
  Stream.str(argv[1]);
  Stream >> nOption;
  InitApp(vOptions);
  if (nOption < vOptions.size())
    {
      PrintDoc();
      return (EXIT_FAILURE);
    }
  try
    {
      (*vOptions[nOption - 1])(argc, argv);
    }
  catch (std::exception &Except)
    {
      std::cout << Except.what() << '\n';
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
