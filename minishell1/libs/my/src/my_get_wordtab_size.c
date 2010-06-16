/*
** my_get_wordtab_size.c for libmy in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 18:11:39 2010 antoine luciani
** Last update Tue Jun  1 18:13:03 2010 antoine luciani
*/

#include "my.h"

int		my_get_wordtab_size(char **tab)
{
  int		size;

  if (!tab || !tab[0])
    return (0);
  size = 0;
  while (tab[size])
    size += 1;
  return (size + 1);
}
