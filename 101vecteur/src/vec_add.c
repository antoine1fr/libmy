/*
** vec_add.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 16:38:37 2010 antoine luciani
** Last update Thu Apr 15 16:46:09 2010 antoine luciani
*/

#include "vector_n.h"

void		vec_add(t_vector_n *v1, t_vector_n *v2, t_vector_n *v3)
{
  int		i;

  if (!v1 || !v2 || !v3)
    return;
  vec_init(v3, v1->dim);
  i = 0;
  while (i < v1->dim)
    {
      v3->coord[i] = v1->coord[i] + v2->coord[i];
      i += 1;
    }
}
