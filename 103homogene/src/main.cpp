//
// main.cpp for 103homogene in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 15:54:08 2010 antoine luciani
// Last update Sun May  2 17:28:35 2010 antoine luciani
//

#include <stdlib.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <stdexcept>

#include "option_functors.hpp"

static void	PrintDoc()
{
  std::cout << "Usage :\n";
}

static void	InitApp(std::vector<COptionFunctor *> &v)
{
}

static void	CleanupApp(std::vector<COptionFunctor *> &v)
{
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
  if (nOption > vOptions.size())
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
  CleanupApp(vOptions);
  return (EXIT_SUCCESS);
}
