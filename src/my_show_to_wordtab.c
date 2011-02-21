/*
** my_show_to_wordtab.c for blabla in /home/lucian_b/Documents/epitech/libmy
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Feb 21 12:53:44 2011 antoine luciani
** Last update Mon Feb 21 12:53:46 2011 antoine luciani
*/
#include "my.h"

void		my_show_to_wordtab(char **tab)
{
  while (*tab != 0)
    {
      my_putstr(*tab);
      my_putchar('\n');
      tab += 1;
    }
}
