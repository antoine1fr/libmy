/*
** vector_n.h for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 15:52:54 2010 antoine luciani
** Last update Thu Apr 15 20:48:29 2010 antoine luciani
*/

#ifndef VECTOR_N_H
# define VECTOR_N_H

typedef struct	s_vector_n
{
  int		*coord;
  int		dim;
}		t_vector_n;

void		vec_init(t_vector_n *vec, int dim);
void		vec_clean(t_vector_n *vec);
void		vec_fill_random(t_vector_n *vec);
void		vec_add(t_vector_n *v1, t_vector_n *v2, t_vector_n *v3);
void		vec_mult(t_vector_n *v, int n, t_vector_n *res);
int  		vec_dot(t_vector_n *v1, t_vector_n *v2);
float		vec_norm(t_vector_n *v);
void		vec_cross(t_vector_n *v, t_vector_n *v2, t_vector_n *v3);

#endif /* VECTOR_N_H */
