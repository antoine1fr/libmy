/*
** vec_init.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 15:55:18 2010 antoine luciani
** Last update Thu Apr 15 15:58:09 2010 antoine luciani
*/

#include "my.h"
#include "vector_n.h"

void		vec_init(t_vector_n *vec, int dim)
{
  if (!vec)
    return;
  vec->coord = xmalloc(dim * sizeof(*(vec->coord)));
  vec->dim = dim;
}
