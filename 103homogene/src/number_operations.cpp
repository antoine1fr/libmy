//
// number_add.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 14:51:26 2010 antoine luciani
// Last update Sun May  2 15:16:09 2010 antoine luciani
//

#include "number.hpp"

namespace	math
{
  CNumber	operator + (const CNumber &Num1, const CNumber &Num2)
  {
    CNumber	Res;

    Res = Num1.GetInteger() + Num2.GetInteger();
    return (Res);
  }

  CNumber	operator * (const CNumber &Num1, const CNumber &Num2)
  {
    CNumber	Res;

    Res = Num1.GetInteger() * Num2.GetInteger();
    return (Res);
  }

  CNumber	&CNumber::operator += (const CNumber &Number)
  {
    m_n += Number.GetInteger();
    return (*this);
  }

  CNumber	operator * (const CNumber &Number, int Integer)
  {
    CNumber	Result;

    Result = Number.GetInteger() * Integer;
    return (Result);
  }
}
