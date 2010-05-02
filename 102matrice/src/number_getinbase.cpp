//
// number_getinbase.cpp for 102matrix in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 14:15:45 2010 antoine luciani
// Last update Sun May  2 15:14:05 2010 antoine luciani
//

#include "number.hpp"

namespace	math
{
  std::string	CNumber::GetInBase(unsigned int nBase) const
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
				      std::string &sNum) const
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
