/*
** vec3_dot.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:24:55 2010 antoine luciani
** Last update Sun Apr 18 18:26:36 2010 antoine luciani
*/

#include "vector3f.h"

float		vec3_dot(t_vector3f *u, t_vector3f *v)
{
  return (u->x * v->x + u->y * v->y + u->z * v->z);
}
