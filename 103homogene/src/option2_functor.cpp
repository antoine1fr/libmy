//
// option2_functor.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 15:32:21 2010 antoine luciani
// Last update Sun May  2 17:19:12 2010 antoine luciani
//

#include <string>
#include <sstream>
#include <stdexcept>

#include "option_functors.hpp"

void			COption2Functor::ExtractOptions(int nArgCount, char **pArgs)
{
  int			i;
  std::istringstream	Stream;
  std::string		String;

  if (nArgCount < 8)
    throw std::runtime_error("missing arguments");
  i = 2;
  while (i < nArgCount)
    {
      String += ' ';
      String += pArgs[i++];
    }
  Stream.str(String);
  Stream >> m_nBase >> m_nCoef >> m_mat;
}

void			COption2Functor::Launch(int nArgCount, char **pArgs)
{
  math::CMatrix2	matResult;

  ExtractOptions(nArgCount, pArgs);
  matResult = m_mat * m_nCoef;
  math::CNumber::SetOutputBase(m_nBase);
  std::cout << "Matrix A :\n" << m_mat << '\n';
  std::cout << "p = " << m_nCoef << '\n';
  std::cout << "Matrix p.A :\n" << matResult << '\n';
}
