/*
** main.c for test my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Apr 12 11:31:03 2010 antoine luciani
** Last update Mon Apr 12 19:21:06 2010 antoine luciani
*/

#include "my.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
  int		a;

  a = 42;
  printf("%.**0-i\n", 10, 14, a);
  return (0);
}
