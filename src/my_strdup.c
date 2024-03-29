/*
** my_strdup.c for my_strdup in /u/all/lucian_b/cu/work/piscine/Jour_08
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 17 11:38:10 2010 antoine luciani
** Last update Mon Feb 21 12:55:23 2011 antoine luciani
*/

#include <stdlib.h>
#include "my.h"

char		*my_strdup(char *str)
{
  int		size;
  char		*new_str;

  size = my_strlen(str) + 1;
  new_str = xmalloc(size);
  if (new_str == 0)
    return (0);
  my_strcpy(new_str, str);
  return (new_str);
}
