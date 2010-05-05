//
// option3_functor.cpp for 102matrix in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 16:49:11 2010 antoine luciani
// Last update Sun May  2 17:19:19 2010 antoine luciani
//

#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>

#include "option_functors.hpp"

void			COption3Functor::ExtractOptions(int nArgCount,
							char **pArgs)
{
  int			i;
  std::string		String;
  std::istringstream	Stream;

  if (nArgCount < 9)
    throw std::runtime_error("arguments are missing");
  i = 2;
  while (i < nArgCount)
    {
      String += ' ';
      String += pArgs[i++];
    }
  Stream.str(String);
  Stream >> m_nBase >> m_mat >> m_v;
}

void			COption3Functor::Launch(int nArgCount, char **pArgs)
{
  math::CVector2	vResult;

  ExtractOptions(nArgCount, pArgs);
  vResult = m_mat * m_v;
  math::CNumber::SetOutputBase(m_nBase);
  std::cout << "Matrix A :\n" << m_mat << '\n';
  std::cout << "Vector u :\n" << m_v << '\n';
  std::cout << "Vector A.p :\n" << vResult << '\n';
}
