//
// number.hpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 23:54:52 2010 antoine luciani
// Last update Sun May  2 15:19:50 2010 antoine luciani
//

#ifndef _NUMBER_HPP_
#define _NUMBER_HPP_

#include <string>
#include <iostream>

namespace	math
{
  class		CNumber
  {
  private:
    int		m_n;
    const char	*DIGITS;

  public:
    static unsigned int	s_nBase;

  public:
    /*
    ** Default constructor.
    */
    CNumber(int n = 0);

    /*
    ** Copy constructor.
    */
    CNumber(const CNumber &Number);

    /*
    ** Returns the integer version of the number.
    */
    int		GetInteger() const;

    /*
    ** Returns the number in a given base.
    */
    std::string	GetInBase(unsigned int nBase) const;

    /*
    ** Affectation from an unsigned int.
    */
    CNumber	&operator = (int n);

    /*
    ** Affectation from a CNumber.
    */
    CNumber	&operator = (const CNumber &Number);

    CNumber	&operator += (const CNumber &Number);

    /*
    ** Save the base to use for output.
    */
    static void	SetOutputBase (unsigned int nBase);

  private:
    void	GetInBaseRec(int n, unsigned int nBase, std::string &sNum) const;
  };

  std::ostream	&operator << (std::ostream &out, const CNumber &Number);
  std::istream	&operator >> (std::istream &in, CNumber &Number);
  CNumber	operator + (const CNumber &Num1, const CNumber &Num2);
  CNumber	operator * (const CNumber &Num1, const CNumber &Num2);
  CNumber	operator * (const CNumber &Number, int Integer);
}

#endif /* _NUMBER_HPP_ */
