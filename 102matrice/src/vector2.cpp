//
// vector2.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 17:40:09 2010 antoine luciani
// Last update Sat May  1 17:48:16 2010 antoine luciani
//

#include "vector2.hpp"
#include "matrix2.hpp"

namespace	math
{
  CVector2::CVector2(int x, int y)
  {
    m_x = x;
    m_y = y;
  }

  CVector2::CVector2(const CVector2 &v)
  {
    m_x = v.m_x;
    m_y = v.m_y;
  }

  CVector2	&CVector2::operator = (const CVector2 &v)
  {
    m_x = v.m_x;
    m_y = v.m_y;
    return (*this);
  }

  CVector2	operator * (const CMatrix2 &mat,
			     const CVector2 &v)
  {
    CVector2	res;

    res.m_x = mat.n[0][0] * v.m_x;
    res.m_x += mat.n[0][1] * v.m_y;
    res.m_y = mat.n[1][0] * v.m_x;
    res.m_y += mat.n[1][1] * v.m_y;
    return (res);
  }

  std::ostream	&operator << (std::ostream &out,
			      const CVector2 &v)
  {
    out << v.m_x << '\t' << v.m_y << '\n';
    return (out);
  }
}
