//
// matrix2_mult.cpp for 102vecteur in /u/all/lucian_b/cu/work/projects/102matrices
// 
// Made by antoine luciani
// Login   <lucian_b@epitech.net>
// 
// Started on  Sat May  1 16:52:13 2010 antoine luciani
// Last update Sat May  1 18:10:57 2010 antoine luciani
//

#include "matrix2.hpp"
#include "vector2.hpp"

namespace	math
{
  CMatrix2	operator * (const CMatrix2 &mat1,
			    const CMatrix2 &mat2)
  {
    CMatrix2	res;
    int		i;
    int		j;

    i = 0;
    while (i < 2)
      {
	j = 0;
	while (j < 2)
	  {
	    res.n[i][j] = mat1.n[i][0] * mat2.n[0][j];
	    res.n[i][j] += mat1.n[i][1] * mat2.n[1][j];
	    j += 1;
	  }
	i += 1;
      }
    return (res);
  }

  CMatrix2	CMatrix2::operator * (int nbr)
  {
    CMatrix2	res;
    int		i;
    int		j;

    i = 0;
    while (i < 2)
      {
	j = 0;
	while (j < 2)
	  {
	    res.n[i][j] = nbr * n[i][j];
	    j += 1;
	  }
	i += 1;
      }
    return (res);
  }
}
