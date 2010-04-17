/*
** op_sub.c for bistromathique in /u/all/lucian_b/cu/work/bistro
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 31 14:09:36 2010 antoine luciani
** Last update Wed Mar 31 19:38:38 2010 antoine luciani
*/

#include "my.h"
#include "operations.h"

/*
**   10  (n1)
** -  1  (n2)
** -----
**    9
*/
static char	op_sub_char(char n1, char n2, char *carry)
{
  char		result;

  n2 += *carry;
  if (n1 < n2)
    {
      n1 += 10;
      *carry = 1;
    }
  else
    *carry = 0;
  result = n1 - n2 + '0';
  return (result);
}

char		*op_sub(char *n1, char *n2)
{
  char		carry;
  int		max;
  int		i;
  int		len1;
  int		len2;
  char		*result;
  char		tmp1;
  char		tmp2;

  max = op_calc_len_and_max(n1, &len1, n2, &len2);
  result = xmalloc(sizeof(*n1) * (max + 1));
  carry = 0;
  i = 0;
  while (i < max)
    {
      tmp1 = op_get_right_value(n1, len1, max, max - i - 1);
      tmp2 = op_get_right_value(n2, len2, max, max - i - 1);
      result[max - i - 1] = op_sub_char(tmp1, tmp2, &carry);
      i += 1;
    }
  result[max] = '\0';
  return (result);
}
