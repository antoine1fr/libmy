/*
** my_str_to_wordtab.c for Split a string with delimiters into multiple strings. in /u/all/lucian_b/cu/work/my_str_to_wordtab
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Mar 21 14:40:56 2010 antoine luciani
** Last update Tue Jun  1 15:42:38 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"

static int	substring_length(const char *str, char delim)
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

static int	count_substrings(const char *str, char delim)
{
  int		i;

  i = 1;
  while (*str != 0)
    {
      if (*str == delim)
	i += 1;
      str += 1;
    }
  return (i);
}

char		**my_str_to_wordtab_delim(const char *str, char delim)
{
  char		**word_tab;
  int		tab_index;
  int		word_len;
  int		word_count;

  word_count = count_substrings(str, delim);
  if (!word_count)
      return (0);
  word_tab = malloc((1 + word_count) * sizeof(str));
  if (!word_tab)
    return (0);
  tab_index = 0;
  while (*str != 0)
    {
      if (*str != delim)
	{
	  word_len = substring_length(str, delim);
	  word_tab[tab_index++] = my_strtok(str, delim);
	  str += word_len;
	}
      else
	str += 1;
    }
  word_tab[tab_index] = 0;
  return (word_tab);
}
