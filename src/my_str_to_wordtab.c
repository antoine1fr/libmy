/*
** my_str_to_wordtab.c for splits a string into multiple strings in /u/all/lucian_b/cu/work/my_str_to_wordtab
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Mar 21 17:01:22 2010 antoine luciani
** Last update Mon Feb 21 13:22:03 2011 antoine luciani
*/

#include <stdlib.h>
#include <stdbool.h>

#include "my.h"

#define IS_SPACE_CHAR(x) (((x) == ' ') || ((x) == '\t')	\
			  || ((x) == '\n'))

static unsigned int	count_words(const char *str)
{
  bool			in_word;
  unsigned int		count;

  in_word = false;
  count = 0;
  while (*str)
  {
    if (!in_word && !IS_SPACE_CHAR(*str))
    {
      in_word = true;
      count += 1;
    }
    else if (in_word && IS_SPACE_CHAR(*str))
      in_word = false;
    str += 1;
  }
  return (count);
}

static const char	*find_word_pos(const char *str, bool begin)
{
  while (begin && IS_SPACE_CHAR(*str))
    str += 1;
  while (!begin && !IS_SPACE_CHAR(*str))
    str += 1;
  return (str);
}

char		**my_str_to_wordtab(const char *str)
{
  char		**word_tab;
  const char	*word_end;
  int		tab_index;
  int		word_count;

  word_count = count_words(str);
  word_tab = xmalloc(word_count);
  tab_index = 0;
  while (tab_index < word_count)
  {
    str = find_word_pos(str, true);
    word_end = find_word_pos(str, false);
    word_tab[tab_index++] = my_strndup(str, word_end - str);
    str = word_end;
  }
  word_tab[tab_index] = 0;
  return (word_tab);
}
