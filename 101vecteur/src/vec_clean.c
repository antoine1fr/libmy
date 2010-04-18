/*
** vec_clean.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 16:04:52 2010 antoine luciani
** Last update Thu Apr 15 16:26:38 2010 antoine luciani
*/

#include <stdlib.h>
#include "vector_n.h"

void		vec_clean(t_vector_n *vec)
{
  if (!vec || !vec->coord)
    return;
  free(vec->coord);
  vec->coord = 0;
  vec->dim = 0;
}
