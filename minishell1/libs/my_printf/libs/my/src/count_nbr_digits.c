/*
** count_nbr_digits.c for libmy in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 18:28:09 2010 antoine luciani
** Last update Thu Apr 29 18:36:50 2010 antoine luciani
*/

#include "my.h"

int		count_nbr_digits(int n, int base)
{
  int		count;

  if (n == 0)
    return (1);
  count = 0;
  while (n != 0)
    {
      n = n / base;
      count += 1;
    }
  return (count);
}
