/*
** my_strtok.c for extract a token from a string in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Mar 21 15:39:19 2010 antoine luciani
** Last update Thu May 20 14:11:59 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"

static int	substring_length(char *str, char delim)
{
  int		len;

  len = 0;
  while (*str != 0 && *str != delim)
    {
      len += 1;
      str += 1;
    }
  return (len);
}

char		*my_strtok(char *str, char delim)
{
  int		word_len;
  char		*token;

  word_len = substring_length(str, delim);
  if (word_len <= 0)
    return (0);
  token = malloc(word_len + 1);
  if (!token)
    return (0);
  my_strncpy(token, str, word_len);
  token[word_len] = 0;
  return (token);
}
