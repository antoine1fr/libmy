/*
** main.c for test my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 13:37:28 2010 antoine luciani
** Last update Wed Apr 21 16:22:02 2010 antoine luciani
*/

#include <stdlib.h>

#include "my_printf.h"
#include "my.h"

int		main(int argc, char **argv)
{
  char		*str;

  str = "Antoine\n";
  my_printf("%S\n", str);
  return (EXIT_SUCCESS);
}
