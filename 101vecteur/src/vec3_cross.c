/*
** vec3_cross.c for lol in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 20:34:36 2010 antoine luciani
** Last update Sun Apr 18 18:02:46 2010 antoine luciani
*/

#include "vector_n.h"

void		vec3_cross(t_vector_n *v, t_vector_n *v2, t_vector_n *v3)
{
  if (v->dim != 3)
    return;
  vec_init(v3, v->dim);
  v3->coord[0] = (v->coord[1] * v2->coord[2]) - (v->coord[2] * v2->coord[1]);
  v3->coord[1] = (v->coord[2] * v2->coord[0]) - (v->coord[0] * v2->coord[2]);
  v3->coord[2] = (v->coord[0] * v2->coord[1]) - (v->coord[1] * v2->coord[0]);
}
