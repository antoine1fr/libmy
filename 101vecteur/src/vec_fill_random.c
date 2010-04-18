/*
** vec_fill_random.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 15:59:18 2010 antoine luciani
** Last update Thu Apr 15 17:18:47 2010 antoine luciani
*/

#include "vector_n.h"
#include <time.h>
#include <stdlib.h>

void		vec_fill_random(t_vector_n *vec)
{
  int		i;

  if (!vec)
    return;
  i = 0;
  while (i < vec->dim)
    vec->coord[i++] = rand() % 10;
}
