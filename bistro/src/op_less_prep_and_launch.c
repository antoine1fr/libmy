/*
** op_less_prep_and_launch.c for bistromathique in /u/all/lucian_b/cu/work/bistro/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat Apr  3 15:43:39 2010 antoine luciani
** Last update Tue Apr  6 10:25:14 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"
#include "operations.h"

char	*op_less_prep_and_launch(t_number *n1, t_number *n2)
{
  char	*tmp;
  char	*result;

  if (n1->sign == NEGATIVE && n2->sign == POSITIVE)
    tmp = op_add(n1->begin, n2->begin);
  else if (n1->sign == NEGATIVE && n2->sign == NEGATIVE)
    {
      n1->sign = POSITIVE;
      n2->sign = POSITIVE;
      return (op_less_prep_and_launch(n2, n1));
    }
  else if (n1->sign == POSITIVE && n2->sign == POSITIVE)
    {
      if (my_strcmp(n1->begin, n2->begin) < 0)
	tmp = op_sub(n2->begin, n1->begin);
      else
	return (op_sub(n1->begin, n2->begin));
    }
  else if (n1->sign == POSITIVE && n2->sign == NEGATIVE)
    {
      n2->sign = POSITIVE;
      return (op_add(n1->begin, n2->begin));
    }
  result = negativize(tmp);
  free(tmp);
  return (result);
}
