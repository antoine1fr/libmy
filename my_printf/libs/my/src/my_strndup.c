/*
** my_strndup.c for libmy in /u/all/lucian_b/cu/util/c/my/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr  4 15:19:23 2010 antoine luciani
** Last update Sun Apr  4 17:31:16 2010 antoine luciani
*/

#include "my.h"

char		*my_strndup(char *src, int n)
{
  char		*dest;
  int		i;

  dest = xmalloc(my_strlen(src) + 1);
  i = 0;
  while (src[i] != 0 && i < n)
    {
      dest[i] = src[i];
      i += 1;
    }
  dest[i] = 0;
  return (dest);
}
