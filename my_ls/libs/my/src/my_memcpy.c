/*
** my_memcpy.c for libmy in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat May 29 16:47:31 2010 antoine luciani
** Last update Sat May 29 16:53:11 2010 antoine luciani
*/

#include "my.h"

void		my_memcpy(void *dest, void *src, unsigned int size)
{
  unsigned int	i;
  char		*p1;
  char		*p2;

  i = 0;
  p1 = (char *)dest;
  p2 = (char *)src;
  while (i < size)
    {
      p1[i] = p2[i];
      i += 1;
    }
}
