/*
** main.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 15:48:50 2010 antoine luciani
** Last update Thu Apr 15 21:58:13 2010 antoine luciani
*/

#include <stdlib.h>
#include <time.h>
#include "vector_n.h"
#include "my.h"
#include <stdio.h>

static void	print_vector(t_vector_n *vec)
{
  int		i;
  int		begin;

  if (!vec)
    return;
  i = 0;
  begin = 1;
  my_putchar('(');
  while (i < vec->dim)
    {
      if (begin)
	begin = 0;
      else
	my_putchar(',');
      my_put_nbr(vec->coord[i++]);
    }
  my_putstr(")\n");
}

int		main(int argc, char **argv)
{
  t_vector_n	v1;
  t_vector_n	v2;
  t_vector_n	v3;
  int		dim;

  if (argc != 2)
    return (0);
  srand(time(0));
  dim = my_getnbr(argv[1]);
  vec_init(&v1, dim);
  vec_fill_random(&v1);
  print_vector(&v1);
  printf("norm : %f", vec_norm(&v1));
  vec_clean(&v1);
  return (0);
}
