/*
** my_revstr.c for my_revstr in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 10:56:49 2010 antoine luciani
** Last update Mon Mar 15 11:27:22 2010 antoine luciani
*/

#include "my.h"

char		*my_revstr(char *str)
{
  int		len;
  int		i;

  i  = 0;
  len = my_strlen(str);
  while (i < len / 2)
    {
      my_swap(&str[i], &str[len - 1 - i]);
      i += 1;
    }
  str[len] = '\0';
  return (str);
}
