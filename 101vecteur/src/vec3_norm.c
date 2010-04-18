/*
** vec3_norm.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:16:10 2010 antoine luciani
** Last update Sun Apr 18 18:18:51 2010 antoine luciani
*/

#include "vector3f.h"
#include <math.h>

float		vec3_norm(t_vector3f *u)
{
  float		res;

  res = u->x * u->x + u->y * u->y + u->z * u->z;
  res = sqrt(res);
  return (res);
}
