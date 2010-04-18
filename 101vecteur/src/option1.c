/*
** option1.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 14:25:39 2010 antoine luciani
** Last update Sun Apr 18 17:20:31 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "vector_n.h"

static void	opt1_u_plus_v(t_vector_n *u, t_vector_n *v)
{
  t_vector_n	w;
  int		i;

  vec_add(u, v, &w);
  printf("\t\tVecteur u\tVecteur v\tVecteur u + v\n");
  i = 0;
  while (i < w.dim)
    {
      printf("\t\t    %d\t\t    %d\t\t      %d\n",
	     u->coord[i], v->coord[i], w.coord[i]);
      i += 1;
    }
  write(1, "\n", 1);
  vec_clean(&w);
}

static void	opt1_p_mult_u(t_vector_n *u)
{
  int		p;
  t_vector_n	v;
  int		i;

  p = rand() % 9;
  vec_mult(u, p, &v);
  i = 0;
  printf("Nombre p - %d\n\n", p);
  printf("\t\tVecteur u\tVecteur p.u\n");
  while (i < v.dim)
    {
      printf("\t\t    %d\t\t    %d\n",
	     u->coord[i], v.coord[i]);
      i += 1;
    }
  write(1, "\n", 1);
  vec_clean(&v);
}

static void	opt1_u_dot_v(t_vector_n *u, t_vector_n *v)
{
  int		dot;

  dot = vec_dot(u, v);
  printf("Produit scalaire (u,v) = %d\n", dot);
}

void		option1(int arg_count, char **arg_tab)
{
  t_vector_n	u;
  t_vector_n	v;
  int		dim;

  dim = my_getnbr(arg_tab[2]);
  vec_init(&u, dim);
  vec_init(&v, dim);
  vec_fill_random(&u);
  vec_fill_random(&v);
  opt1_u_plus_v(&u, &v);
  opt1_p_mult_u(&u);
  opt1_u_dot_v(&u, &v);
  vec_clean(&u);
  vec_clean(&v);
}
