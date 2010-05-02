//
// vector2.hpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 17:29:23 2010 antoine luciani
// Last update Sun May  2 15:07:25 2010 antoine luciani
//

#ifndef _VECTOR2_HPP_
# define _VECTOR2_HPP_

#include <iostream>
#include "number.hpp"

namespace	math
{
  class		CMatrix2;

  class		CVector2
  {
  public:
    CNumber	m_x;
    CNumber	m_y;

  public:
    /*
    ** Default constructor.
    */
    CVector2(int x = 0, int y = 0);

    /*
    ** Copy constructor.
    */
    CVector2(const CVector2 &v);

    /*
    ** Affectation-operator overloading.
    */
    CVector2	&operator = (const CVector2 &v);
  };

  CVector2	operator * (const CMatrix2 &mat,
			    const CVector2 &v);

  /*
  ** Output-operator overload.
  */
  std::ostream	&operator << (std::ostream &out,
			      const CVector2 &v);
}

#endif /* _VECTOR2_HPP_ */
