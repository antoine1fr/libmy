//
// matrix2_add.cpp for 102matrice in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 16:49:20 2010 antoine luciani
// Last update Sat May  1 17:33:53 2010 antoine luciani
//

#include "matrix2.hpp"

namespace	math
{
  CMatrix2	operator + (const CMatrix2 &mat1,
			    const CMatrix2 &mat2)
  {
    CMatrix2	res;

    res.n[0][0] = mat1.n[0][0] + mat2.n[0][0];
    res.n[0][1] = mat1.n[0][1] + mat2.n[0][1];
    res.n[1][0] = mat1.n[1][0] + mat2.n[1][0];
    res.n[1][1] = mat1.n[1][1] + mat2.n[1][1];
    return (res);
  }
}
