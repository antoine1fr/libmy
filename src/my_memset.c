/*
** my_memset.c for my_memset in /u/all/lucian_b/cu/util/c/my/trunk/src
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:18:25 2010 antoine luciani
** Last update Thu Apr 15 13:35:29 2010 antoine luciani
*/

#include "my.h"

void		*my_memset(void *ptr, int value, int size)
{
  char		*current;

  current = ptr;
  while (size-- > 0)
    *current++ = value;
  return (ptr);
}
