/*
** option2.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 17:30:12 2010 antoine luciani
** Last update Sun Apr 18 18:02:06 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "vector_n.h"
#include "options.h"

static void	opt2_cross(t_vector_n *u, t_vector_n *v)
{
  t_vector_n	w;
  int		i;

  vec3_cross(u, v, &w);
  printf("\t\tVecteur u\tVecteur v\tVecteur u vect v\n");
  i = 0;
  while (i < w.dim)
    {
      printf("\t\t    %d\t\t    %d\t\t      %d\n",
	     u->coord[i], v->coord[i], w.coord[i]);
      i += 1;
    }
  write(1, "\n", 1);
  printf("Norm ||u|| - %.3f\n", vec_norm(u));
  printf("Norm ||u vect v|| - %.3f\n", vec_norm(&w));
  vec_clean(&w);
}

void		option2(int UNUSED arg_count, char UNUSED **arg_tab)
{
  t_vector_n	u;
  t_vector_n	v;

  vec_init(&u, 3);
  vec_init(&v, 3);
  vec_fill_random(&v);
  vec_fill_random(&u);
  opt2_cross(&u, &v);
  vec_clean(&u);
  vec_clean(&v);
}
