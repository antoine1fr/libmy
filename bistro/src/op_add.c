/*
** op_add.c for bistromathique in /u/all/lucian_b/cu/work/bistro/src
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 30 11:45:42 2010 antoine luciani
** Last update Sun Apr  4 18:52:38 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"
#include "operations.h"

/*
** Adds to units.
*/
static char	op_add_units(char n1, char n2, char *carry)
{
  char		result;

  result = n1 + n2 + *carry;
  if (result > 9)
    {
      *carry = result / 10;
      result = result % 10;
    }
  else
    *carry = 0;
  result += '0';
  return (result);
}

/*
** Addition of two string-numbers in base 10.
*/
char		*op_add(char *n1, char *n2)
{
  char		carry;
  int		len1;
  int		len2;
  int		max;
  int		i;
  char		tmp1;
  char		tmp2;
  char		*result;

  carry = 0;
  max = op_calc_len_and_max(n1, &len1, n2, &len2);
  i = 0;
  result = xmalloc(sizeof(*n1) * (max + 2));
  while (i < max)
    {
      tmp1 = op_get_right_value(n1, len1, max, max - i - 1);
      tmp2 = op_get_right_value(n2, len2, max, max - i - 1);
      result[max - i] = op_add_units(tmp1, tmp2, &carry);
      i += 1;
    }
  result[0] = carry + '0';
  result[i + 1] = 0;
  return (result);
}
