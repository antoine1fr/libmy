/*
** op_mul.c for bistro in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Sun Apr  4 16:46:45 2010 remy radix
** Last update Tue Apr  6 18:28:27 2010 remy radix
*/

#include "my.h"
#include "operations.h"

static char	op_mul_check(char n, char *carry)
{
  if (n > 9)
    {
      *carry += n / 10;
      return (n % 10);
    }
  return (n);
}

static char	op_mul_unit(char n1, char n2, char *carry)
{
  char		res;

  n1 -= '0';
  n2 -= '0';
  res = n1 * n2 + (*carry);
  *carry = 0;
  res = op_mul_check(res, carry);
  return (res);
}

static void	op_mul_initialize(char **n, int size, char **n1, char **n2)
{
  int		i;

  i = 0;
  *n = xmalloc(sizeof(**n) * size);
  while (i < (size - 1))
      (*n)[i++] = 0;
  (*n)[i] = 0;
  *n1 = my_revstr(*n1);
  *n2 = my_revstr(*n2);
}

static char	*op_mul_conv(char *n, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      n[i] += '0';
      i++;
    }
  n = my_revstr(n);
  return (n);
}

char		*op_mul(char *nb1, char *nb2)
{
  int		i;
  int		j;
  int		len1;
  int		len2;
  char		carry;
  char		*res;

  op_calc_len_and_max(nb1, &len1, nb2, &len2);
  op_mul_initialize(&res, len1 + len2 + 1, &nb1, &nb2);
  i = 0;
  while (i < len2)
    {
      carry = 0;
      j = 0;
      while (j < len1)
	{
	  res[j + i] += op_mul_unit(nb1[j], nb2[i], &carry);
	  res[j + i] = op_mul_check(res[j + i], &carry);
	  j++;
	}
      res[j + i] += carry;
      i++;
    }
  res = op_mul_conv(res, len1 + len2);
  return (res);
}
