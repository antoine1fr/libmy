/*
** vec_dot.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 17:00:44 2010 antoine luciani
** Last update Thu Apr 15 17:06:10 2010 antoine luciani
*/

#include "vector_n.h"

int		vec_dot(t_vector_n *v1, t_vector_n *v2)
{
  int		dot;
  int		i;

  if (!v1 || !v2)
    return (-1);
  dot = 0;
  i = 0;
  while (i < v1->dim)
    {
      dot += v1->coord[i] * v2->coord[i];
      i += 1;
    }
  return (dot);
}
