/*
** my_show_to_wordtab.c for my_show_to_wordtab
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