//
// option_functor.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 13:36:44 2010 antoine luciani
// Last update Sun May  2 13:36:46 2010 antoine luciani
//

#include "option_functors.hpp"

void		COptionFunctor::operator () (int nArgCount,
					     char **pArgs)
{
  Launch(nArgCount, pArgs);
}
