/*
** my_isneg.c for my_isneg in /u/all/lucian_b/cu/test/Jour_03
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 10 10:45:44 2010 antoine luciani
** Last update Wed Mar 10 10:49:42 2010 antoine luciani
*/

#include "my.h"

void		my_isneg(int n)
{
  if (n < 0)
    {
      my_putchar('N');
    }

  else
    {
      my_putchar('P');
    }
}
