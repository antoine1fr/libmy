//
// number.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 23:57:23 2010 antoine luciani
// Last update Sun May  2 00:59:13 2010 antoine luciani
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

  std::string	CNumber::GetInBase(unsigned int nBase)
  {
    std::string	sNum;
    int		n;

    n = m_n;
    if (n < 0)
      sNum = '-';
    else if (n == 0)
      sNum = '0';
    else
      GetInBaseRec(n, nBase, sNum);
    return (sNum);
  }

  void		CNumber::GetInBaseRec(int n, unsigned int nBase,
				      std::string &sNum)
  {
    int		nMod;

    if (n == 0)
      return;
    GetInBaseRec(n / nBase, nBase, sNum);
    nMod = n % nBase;
    if (nMod < 0)
      nMod = -nMod;
    sNum += DIGITS[nMod];
  }
}
