/*
** vec3_normalize.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:20:24 2010 antoine luciani
** Last update Sun Apr 18 19:17:39 2010 antoine luciani
*/

#include "vector3f.h"

t_vector3f		vec3_normalize(t_vector3f *v)
{
  t_vector3f		res;
  float			norm;

  norm = vec3_norm(v);
  if (norm == 0.0f)
    norm = 1.0f;
  res.x = v->x / norm;
  res.y = v->y / norm;
  res.z = v->z / norm;
  return (res);
}
