/*
** swiffer.c for bistro in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Apr  7 12:06:23 2010 remy radix
** Last update Wed Apr  7 17:38:42 2010 remy radix
*/

#include "operations.h"
#include "my.h"
#include <stdlib.h>

static int	is_num(char n)
{
  if ((n > '0') && (n <= '9'))
    return (1);
  return (0);
}

static char	*check_num(int sign, char *n)
{
  char		*res;

  if (sign)
    {
      res = negativize(n);
      free(n);
    }
  else
    res = n;
  return (res);
}

static char	*zero()
{
  char		*res;

  res = xmalloc(sizeof(*res) * 2);
  res[0] = '0';
  res[1] = 0;
  return (res);
}

char		*swiffer(char *n)
{
  int		sign;
  int		pos;
  char		*res;
  char		*tmp;

  if (*n == '-')
    sign = 1;
  else
    sign = 0;
  pos = sign;
  while (n[pos])
    {
      if (is_num(n[pos]))
	{
	  tmp = my_strdup(n + pos);
	  res = check_num(sign, tmp);
	  free(n);
	  return (res);
	}
      pos += 1;
    }
  res = zero();
  return (res);
}
