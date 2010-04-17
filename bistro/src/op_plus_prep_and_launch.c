/*
** op_plus_prep_and_launch.c for bistromathique in /u/all/lucian_b/cu/work/bistro/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat Apr  3 15:20:37 2010 antoine luciani
** Last update Mon Apr  5 18:13:05 2010 antoine luciani
*/

#include "operations.h"
#include "my.h"
#include <stdlib.h>

char		*op_plus_prep_and_launch(t_number *n1, t_number *n2)
{
  char		*result;
  char		*tmp;

  if ((n1->sign == POSITIVE) && (n2->sign == NEGATIVE))
    {
      n2->sign = POSITIVE;
      return (op_less_prep_and_launch(n1, n2));
    }
  else if (n1->sign == NEGATIVE && n2->sign == POSITIVE)
    {
      n1->sign = POSITIVE;
      return (op_less_prep_and_launch(n2, n1));
    }
  else if (n1->sign == POSITIVE && n2->sign == POSITIVE)
      return (op_add(n1->begin, n2->begin));
  else
    {
      tmp = op_add(n1->begin, n2->begin);
      result = negativize(tmp);
      free(tmp);
      return (result);
    }
}
