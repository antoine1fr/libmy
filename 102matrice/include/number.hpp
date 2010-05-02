//
// number.hpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 23:54:52 2010 antoine luciani
// Last update Sun May  2 14:14:40 2010 antoine luciani
//

#ifndef _NUMBER_HPP_
#define _NUMBER_HPP_

#include <string>

namespace	math
{
  class		CNumber
  {
  private:
    int		m_n;
    const char	*DIGITS;

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
    std::string	GetInBase(unsigned int nBase);

    /*
    ** Affectation-operator overloading.
    */
    CNumber	&operator = (int n);

  private:
    void	GetInBaseRec(int n, unsigned int nBase, std::string &sNum);
  };
}

#endif /* _NUMBER_HPP_ */
