/*
** vec_angle.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:38:28 2010 antoine luciani
** Last update Sun Apr 18 18:41:52 2010 antoine luciani
*/

#include "vector_n.h"
#include "vector3f.h"

float		vec_angle(t_vector_n *u, t_vector_n *v)
{
  t_vector3f	w;
  t_vector3f	x;

  x.x = (float)u->coord[0];
  x.y = (float)u->coord[1];
  x.z = (float)u->coord[2];
  w.x = (float)v->coord[0];
  w.y = (float)v->coord[1];
  w.z = (float)v->coord[2];
  return (vec3_angle(&w, &x));
}
