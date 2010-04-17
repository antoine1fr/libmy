/*
** main.c for bistro in /u/all/radix_r/cu/work/bistro
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Apr  7 17:00:12 2010 remy radix
** Last update Wed Apr  7 18:48:25 2010 remy radix
*/

#include <stdlib.h>
#include "my.h"
#include "operations.h"

int		main(int argc, char **argv)
{
  char		*result;

  if (argc < 4)
    {
      my_putstr("Usage : calc n1 operator n2\n");
      return (1);
    }
  my_putstr(argv[1]);
  my_putstr(argv[2]);
  my_putstr(argv[3]);
  my_putstr("=");
  result = op_launch(argv[1], argv[3], argv[2][0]);
  my_putstr(result);
  my_putstr("\n");
  free(result);
  return (0);
}
