/*
** my_showmem.c for my_showmem in /u/all/lucian_b/cu/work/piscine/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 12:22:38 2010 antoine luciani
** Last update Fri Mar 19 11:02:08 2010 antoine luciani
*/

#include "my.h"

int		digit_count(int nbr, int base)
{
  int		result;

  if (nbr == 0)
    return (1);
  result = 0;
  while (nbr != 0)
    {
      nbr /= base;
      result += 1;
    }
  return (result);
}

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

void		print_hex(int nbr, int char_count)
{
  char		*hex_base;
  int		i;

  hex_base = "0123456789abcdef";
  i = 0;
  while (i < (char_count - digit_count(nbr, 16)))
    {
      my_putchar('0');
      i += 1;
    }
  if (nbr < 0)
    nbr = -nbr;
  my_putnbr_base(nbr, hex_base);
}

void		print_hex_str(char *beg, char *end)
{
  int		i;
  int		char_count;

  i = 0;
  char_count = 0;
  while (i < 16 && &beg[i] < end)
    {
      print_hex(beg[i], 2);
      if (i % 2 != 0)
	{
	  my_putchar(' ');
	  char_count += 1;
	}
      i += 1;
      char_count += 2;
    }
  while (char_count < 41)
    {
      my_putchar(' ');
      char_count += 1;
    }
}

void		my_showmem(char *str, int size)
{
  char		*address;
  int		i;

  address = str;
  while (address < str + size)
    {
      print_hex(address - str, 8);
      my_putchar(':');
      my_putchar(' ');
      print_hex_str(address, str + size);
      i = 0;
      while (&address[i] < address + 16 &&
	     &address[i] < str + size)
	{
	  if (address[i] > 31 &&
	      address[i] < 127)
	    my_putchar(address[i]);
	  else
	    my_putchar('.');
	  i += 1;
	}
      address += 16;
      my_putchar('\n');
    }
}
