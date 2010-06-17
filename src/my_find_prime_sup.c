/*
** my_find_prime_sup.c for my_find_prime_sup in /u/all/lucian_b/cu/work/piscine/Jour_05
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 17:11:22 2010 antoine luciani
** Last update Mon Mar 22 11:48:16 2010 antoine luciani
*/

#include "my.h"

int		my_find_prime_sup(int nb)
{
  int		i;

  i = nb + 1;
  while (!my_is_prime(i))
    i += 1;
  return (i);
}
