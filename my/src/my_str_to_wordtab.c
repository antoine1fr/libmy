/*
** my_str_to_wordtab.c for splits a string into multiple strings in /u/all/lucian_b/cu/work/my_str_to_wordtab
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Mar 21 17:01:22 2010 antoine luciani
** Last update Tue Jun  1 15:43:09 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"

int		is_alphanum(char c)
{
  if ((c >= 'A' && c <= 'Z') ||
      (c >= 'a' && c <= 'z') ||
      (c >= '0' && c <= '9'))
    return (1);
  return (0);
}

int		substring_length(const char *str)
{
  int		len;

  len = 0;
  while (*str != 0 && is_alphanum(*str))
    {
      len += 1;
      str += 1;
    }
  return (len);
}

int		count_substrings(const char *str)
{
  int		i;

  i = 1;
  while (*str != 0)
    {
      if (is_alphanum(*str))
	i += 1;
      str += 1;
    }
  return (i);
}

char		*my_strtok_to_wordtab(const char *str)
{
  int		word_len;
  char		*token;

  word_len = substring_length(str);
  if (word_len <= 0)
    return (0);
  token = malloc(word_len + 1);
  if (!token)
    return (0);
  my_strncpy(token, str, word_len);
  return (token);
}

char		**my_str_to_wordtab(const char *str)
{
  char		**word_tab;
  int		tab_index;
  int		word_len;
  int		word_count;

  word_count = count_substrings(str);
  if (word_count < 1)
    return (0);
  word_tab = malloc((word_count + 1) * sizeof(str));
  if (!word_tab)
    return (0);
  tab_index = 0;
  while (*str != 0)
    {
      if (is_alphanum(*str))
	{
	  word_len = substring_length(str);
	  word_tab[tab_index++] = my_strtok_to_wordtab(str);
	  str += word_len;
	}
      else
	str += 1;
    }
  word_tab[tab_index] = 0;
  return (word_tab);
}
