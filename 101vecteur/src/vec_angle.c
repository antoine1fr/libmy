/*
** vec_angle.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:38:28 2010 antoine luciani
** Last update Sun Apr 18 19:04:08 2010 antoine luciani
*/

#include "vector_n.h"
#include "vector3f.h"

float		vec_angle(t_vector_n *u, t_vector_n *v)
{
  t_vector3f	w;
  t_vector3f	x;

  w.x = (float)u->coord[0];
  w.y = (float)u->coord[1];
  w.z = (float)u->coord[2];
  x.x = (float)v->coord[0];
  x.y = (float)v->coord[1];
  x.z = (float)v->coord[2];
  return (vec3_angle(&w, &x));
}
