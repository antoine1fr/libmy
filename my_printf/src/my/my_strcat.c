/*
** my_strcat.c for my_strcat in /u/all/lucian_b/cu/work/piscine/Jour_07
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 20:05:24 2010 antoine luciani
** Last update Wed Mar 17 15:31:48 2010 antoine luciani
*/

#include "my.h"

char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		len;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[i + len] = src[i];
      i += 1;
    }
  dest[i + len] = '\0';
  return (dest);
}
