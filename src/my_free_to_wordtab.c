/*
** my_free_to_wordtab.c for libmy in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu May 13 03:37:23 2010 antoine luciani
** Last update Thu May 13 03:38:14 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"

void		my_free_to_wordtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != 0)
    {
      free(tab[i]);
      i += 1;
    }
  free(tab);
}
