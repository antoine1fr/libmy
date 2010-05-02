//
// option4_functor.cpp for 102matrix in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 16:49:11 2010 antoine luciani
// Last update Sun May  2 17:27:51 2010 antoine luciani
//

#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

#include "option_functors.hpp"

void			COption4Functor::ExtractOptions(int nArgCount,
							char **pArgs)
{
  int			i;
  std::string		String;
  std::istringstream	Stream;

  if (nArgCount < 11)
    throw std::runtime_error("arguments are missing");
  i = 2;
  while (i < nArgCount)
    {
      String += ' ';
      String += pArgs[i++];
    }
  Stream.str(String);
  Stream >> m_nBase >> m_mat1 >> m_mat2;
}

void			COption4Functor::Launch(int nArgCount, char **pArgs)
{
  math::CMatrix2	matResult;

  ExtractOptions(nArgCount, pArgs);
  matResult = m_mat1 * m_mat2;
  math::CNumber::SetOutputBase(m_nBase);
  std::cout << "Matrix A :\n" << m_mat1 << '\n';
  std::cout << "Matrix B :\n" << m_mat2 << '\n';
  std::cout << "Matrix A.B :\n" << matResult << '\n';
}
