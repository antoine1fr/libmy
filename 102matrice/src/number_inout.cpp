//
// number_out.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 14:34:19 2010 antoine luciani
// Last update Sun May  2 15:17:16 2010 antoine luciani
//

#include "number.hpp"

namespace	math
{
  void		CNumber::SetOutputBase(unsigned int nBase)
  {
    s_nBase = nBase;
  }

  std::ostream	&operator << (std::ostream &out, const CNumber &Number)
  {
    out << Number.GetInBase(CNumber::s_nBase);
    return (out);
  }

  std::istream	&operator >> (std::istream &in, CNumber &Number)
  {
    int		n;

    in >> n;
    Number = n;
    return (in);
  }
}
