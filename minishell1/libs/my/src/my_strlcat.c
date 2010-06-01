/*
** my_strlcat.c for my_strlcat in /u/all/lucian_b/cu/work/piscine/Jour_07
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 17 09:23:46 2010 antoine luciani
** Last update Wed Mar 17 09:43:45 2010 antoine luciani
*/

#include "my.h"

int		my_strlcat(char *dest, char *src, int size)
{
  int		i;
  int		remain;
  char		*ptr;
  int		dest_len;
  int		src_len;

  i = 0;
  dest_len = my_strlen(dest);
  src_len = my_strlen(src);
  remain = size - dest_len - 1;
  ptr = dest + dest_len;
  while (i < remain)
    {
      ptr[i] = src[i];
      i += 1;
    }
  ptr[i] = '\0';
  return (dest_len + src_len);
}
