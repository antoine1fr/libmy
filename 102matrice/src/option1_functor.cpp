//
// option1_functor.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 11:30:21 2010 antoine luciani
// Last update Sun May  2 14:05:04 2010 antoine luciani
//

#include <string>
#include <sstream>
#include <stdexcept>
#include <iostream>

#include "option_functors.hpp"

void			COption1Functor::ExtractOptions(int nArgCount,
							char **pArgs)
{
  std::string		String;
  std::istringstream	Stream;
  int			i;

  if (nArgCount < 11)
    throw std::runtime_error("missing arguments");
  i = 2;
  while (i < 11)
    {
      String += ' ';
      String += pArgs[i++];
    }
  Stream.str(String);
  Stream >> m_nBase >> m_mat1 >> m_mat2;
}

void			COption1Functor::Launch(int nArgCount,
					char **pArgs)
{
  math::CMatrix2	matResult;

  ExtractOptions(nArgCount, pArgs);
  matResult = m_mat1 + m_mat2;
  std::cout << "Matrix A :\n" << m_mat1 << '\n';
  std::cout << "Matrix B :\n" << m_mat2 << '\n';
  std::cout << "Matrix A + B :\n" << matResult << '\n';
}
