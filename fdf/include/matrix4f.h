/*
** matrix4f.h for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed May 12 18:58:17 2010 antoine luciani
** Last update Wed May 12 19:23:19 2010 antoine luciani
*/

#ifndef _MATRIX4F_H_
# define _MATRIX4F_H_

typedef float t_matrix4f[4][4];
struct	s_vector4f;

void	mat4f_mult_vec4f(t_matrix4f mat,
			 struct s_vector4f *v,
			 struct s_vector4f *result);

#endif /* !_MATRIX4F_H_ */
