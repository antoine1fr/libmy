/*
** vec3_angle.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:08:55 2010 antoine luciani
** Last update Sun Apr 18 18:30:27 2010 antoine luciani
*/

#include "vector_n.h"
#include "vector3f.h"
#include <math.h>

float		vec3_angle(t_vector3f *u, t_vector3f *v)
{
  t_vector3f	w;
  t_vector3f	x;

  w = vec3_normalize(u);
  x = vec3_normalize(v);
  return (acosf(vec3_dot(u, v)));
}
