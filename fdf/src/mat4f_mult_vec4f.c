/*
** mat4f_mult_vec4f.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed May 12 19:04:02 2010 antoine luciani
** Last update Wed May 12 19:44:29 2010 antoine luciani
*/

#include "matrix4f.h"
#include "vector4f.h"

void		mat4f_mult_vec4f(t_matrix4f mat,
				 struct s_vector4f *v,
				 struct s_vector4f *result)
{
  if (!result || !v)
    return;
  result->x = mat[0][0] * v->x + mat[0][1] * v->y;
  result->x += mat[0][2] * v->z + mat[0][3] * v->w;
  result->y = mat[1][0] * v->x + mat[1][1] * v->y;
  result->y += mat[1][2] * v->z + mat[1][3] * v->w;
  result->z = mat[2][0] * v->x + mat[2][1] * v->y;
  result->z += mat[2][2] * v->z + mat[2][3] * v->w;
  result->w = mat[3][0] * v->x + mat[3][1] * v->y;
  result->w += mat[3][2] * v->z + mat[3][3] * v->w;
}
