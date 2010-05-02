//
// matrix2.hpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 15:02:11 2010 antoine luciani
// Last update Sun May  2 02:05:52 2010 antoine luciani
//

#ifndef _MATRIX2_HPP_
# define _MATRIX2_HPP_

#include <iostream>

namespace	math
{
  class			CMatrix2
  {
  public:
    unsigned int		n[2][2];

  public:
    /*
    ** Default constructor.
    */
    CMatrix2(unsigned int n11 = 0, unsigned int n12 = 0,
	     unsigned int n21 = 0, unsigned int n22 = 0);
    /*
    ** Copy constructor.
    */
    CMatrix2(const CMatrix2 &mat);

    /*
    ** Affection-operator overloading.
    */
    CMatrix2 &operator = (const CMatrix2 &mat);

    /*
    ** Matrix multiply by an integer.
    */
    CMatrix2	operator * (int n);
  };

  /*
  ** Matrix addition.
  */
  CMatrix2	operator + (const CMatrix2 &mat1,
			    const CMatrix2 &mat2);

  /*
  ** Matrix multiplication.
  */
  CMatrix2	operator * (const CMatrix2 &mat1,
			    const CMatrix2 &mat2);

  std::istream	&operator >> (std::istream &in,
			     CMatrix2 &mat);

  /*
  ** Output-operator overloading.
  */
  std::ostream	&operator << (std::ostream &out,
			      const CMatrix2 &mat);
} /* math */

#endif /* _MATRIX2_HPP_ */
