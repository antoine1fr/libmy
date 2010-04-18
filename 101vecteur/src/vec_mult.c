/*
** vec_mult.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 16:55:20 2010 antoine luciani
** Last update Thu Apr 15 16:57:14 2010 antoine luciani
*/

#include "vector_n.h"

void		vec_mult(t_vector_n *v, int n, t_vector_n *res)
{
  int		i;

  if (!v || !res)
    return;
  i = 0;
  vec_init(res, v->dim);
  while (i < v->dim)
    {
      res->coord[i] = v->coord[i] * n;
      i += 1;
    }
}
