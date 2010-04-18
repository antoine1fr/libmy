/*
** vec_cross.c for lol in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 20:34:36 2010 antoine luciani
** Last update Thu Apr 15 21:44:42 2010 antoine luciani
*/

#include "vector_n.h"

void		vec_cross(t_vector_n *v, t_vector_n *v2, t_vector_n *v3)
{
  if (v->dim != 3)
    return;
  v3->coord[0] = (v->coord[1] * v2->coord[2]) - (v->coord[2] * v2->coord[1]);
  v3->coord[1] = (v->coord[2] * v2->coord[0]) - (v->coord[0] * v2->coord[2]);
  v3->coord[2] = (v->coord[0] * v2->coord[1]) - (v->coord[1] * v2->coord[0]);
}
