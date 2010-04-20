/*
** my_strncat.c for my_strncat in /u/all/lucian_b/cu/work/piscine/Jour_07
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 20:05:24 2010 antoine luciani
** Last update Wed Mar 17 09:07:39 2010 antoine luciani
*/

#include "my.h"

char		*my_strncat(char *dest, char *src, int n)
{
  int		i;
  char		*ptr;

  i = 0;
  ptr = dest + my_strlen(dest);
  while (i < n && src[i] != '\0')
    {
      ptr[i] = src[i];
      i += 1;
    }
  ptr[i] = '\0';
  return (dest);
}
