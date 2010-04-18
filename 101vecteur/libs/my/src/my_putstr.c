/*
** my_putstr.c for my_putstr in /u/all/lucian_b/cu/test/Jour_04
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Mar 11 10:00:15 2010 antoine luciani
** Last update Fri Mar 19 10:59:59 2010 antoine luciani
*/

#include "my.h"

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
