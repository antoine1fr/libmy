//
// vector_inout.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrice
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sun May  2 17:04:31 2010 antoine luciani
// Last update Sun May  2 17:20:27 2010 antoine luciani
//

#include "vector2.hpp"

namespace	math
{
  std::ostream	&operator << (std::ostream &out,
			      const CVector2 &v)
  {
    out << v.m_x << '\n' << v.m_y << '\n';
    return (out);
  }

  std::istream	&operator >> (std::istream &in,
			      CVector2 &v)
  {
    in >> v.m_x >> v.m_y;
    return (in);
  }
}
