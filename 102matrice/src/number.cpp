//
// number.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 23:57:23 2010 antoine luciani
// Last update Sun May  2 14:18:34 2010 antoine luciani
//

#include "number.hpp"

namespace	math
{
  CNumber::CNumber(int n) :
    DIGITS("0123456789ABCDEF")
  {
    m_n = n;
  }

  CNumber::CNumber(const CNumber &Number)
  {
    m_n = Number.GetInteger();
  }

  int	CNumber::GetInteger() const
  {
    return (m_n);
  }

  CNumber	&CNumber::operator = (int n)
  {
    m_n = n;
    return (*this);
  }
}
