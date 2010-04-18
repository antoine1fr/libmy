/*
** vec_norm.c for lol in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 17:24:53 2010 antoine luciani
** Last update Thu Apr 15 21:49:11 2010 antoine luciani
*/

#include <math.h>
#include "vector_n.h"

float			vec_norm(t_vector_n *v)
{
  float			res;
  int			i;

  i = 0;
  res = 0;
  while (i < v->dim)
    {
      res += v->coord[i] * v->coord[i];
      i += 1;
    }
  res = sqrtf(res);
  return (res);
}
