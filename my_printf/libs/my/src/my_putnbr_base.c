/*
** my_putnbr_base.c for my_putnbr_base in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 19:56:37 2010 antoine luciani
** Last update Tue Mar 30 11:27:30 2010 antoine luciani
*/

#include "my.h"

int		my_putnbr_base(int nbr, char *base)
{
  int		size;
  int		mod;

  size = 0;
  while (base[size] != '\0')
    size += 1;
  if (size <= 1)
    return (nbr);
  mod = nbr % size;
  if (mod < 0)
    mod = -mod;
  if (nbr / size == 0)
    {
      if (nbr < 0)
	  my_putchar('-');
      my_putchar(base[mod]);
      return (nbr);
    }
  my_putnbr_base(nbr / size, base);
  my_putchar(base[mod]);
  return (nbr);
}
