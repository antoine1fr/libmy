/*
** my_showstr.c for my_showstr in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 10:53:16 2010 antoine luciani
** Last update Tue Jun  1 14:47:46 2010 antoine luciani
*/

#include "my.h"

void		my_showstr(char *str)
{
  int		i;
  char		*base;
  char		test[2];

  test[1] = '\0';
  base = "0123456789abcdef";
  i = 0;
  while (str[i] != '\0')
    {
      test[0] = str[i];
      if (!my_str_isprintable(test))
	{
	  my_putchar('\\');
	  if (str[i] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], base);
	}
      else
	my_putchar(str[i]);
      i += 1;
    }
}
