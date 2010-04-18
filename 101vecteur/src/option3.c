/*
** option3.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 18:45:01 2010 antoine luciani
** Last update Sun Apr 18 19:08:58 2010 antoine luciani
*/

#include <stdlib.h>
#include <stdio.h>
#include "options.h"
#include "vector_n.h"

void		option3(int arg_count, char **arg_tab)
{
  t_vector_n	v;
  t_vector_n	u;

  vec_init(&v, 3);
  vec_init(&u, 3);
  u.coord[0] = atoi(arg_tab[2]);
  u.coord[1] = atoi(arg_tab[3]);
  u.coord[2] = atoi(arg_tab[4]);
  v.coord[0] = atoi(arg_tab[5]);
  v.coord[1] = atoi(arg_tab[6]);
  v.coord[2] = atoi(arg_tab[7]);
  printf("Angle (u,v) - %f\n", vec_angle(&u, &v));
}
