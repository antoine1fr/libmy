/*
** vector3f.h for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:11:28 2010 antoine luciani
** Last update Sun Apr 18 18:25:10 2010 antoine luciani
*/

#ifndef VECTOR3F_H
# define VECTOR3F_H

typedef struct	s_vector3f
{
  float		x;
  float		y;
  float		z;
}		t_vector3f;

float		vec3_norm(t_vector3f *u);
t_vector3f	vec3_normalize(t_vector3f *v);
float		vec3_angle(t_vector3f *u, t_vector3f *v);
float		vec3_dot(t_vector3f *u, t_vector3f *v);

#endif /* !VECTOR3F_H */
