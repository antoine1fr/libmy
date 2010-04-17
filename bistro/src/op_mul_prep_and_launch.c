/*
** op_mul_prep_and_launch.c for bistro in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Tue Apr  6 19:08:12 2010 remy radix
** Last update Tue Apr  6 22:02:20 2010 remy radix
*/

#include "operations.h"
#include "my.h"
#include <stdlib.h>

char		*op_mul_prep_and_launch(t_number *n1, t_number *n2)
{
  char		*res;
  char		*tmp;

  tmp = op_mul(n1->begin,n2->begin);
  if (XOR(n1->sign, n2->sign))
    res = negativize(tmp);
  else
    res = my_strdup(tmp);
  free(tmp);
  return (res);
}
