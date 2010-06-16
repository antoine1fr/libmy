/*
** free_str_tab.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:39:04 2010 antoine luciani
** Last update Thu Apr 29 22:39:06 2010 antoine luciani
*/

#include <stdlib.h>

char		**free_str_tab(char **tab)
{
  int		i;

  if (!tab)
    return (0);
  i = 0;
  while (tab[i] != 0)
    free(tab[i++]);
  free(tab);
  return (0);
}
