/*
** my_revstr.c for my_revstr in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 10:56:49 2010 antoine luciani
** Last update Tue Apr  6 18:04:17 2010 remy radix
*/

#include "my.h"

char		*my_revstr(char *str)
{
  int		len;
  int		i;
  char		tmp;

  i = 0;
  len = my_strlen(str);
  while (i < len / 2)
    {
      tmp = str[i];
      str[i] = str[len - 1 - i];
      str[len - 1 - i] = tmp;
      i += 1;
    }
  str[len] = '\0';
  return (str);
}
