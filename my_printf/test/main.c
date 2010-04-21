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
#include <stdio.h>

#include "my_printf.h"
#include "my.h"

void		print_request(t_request *request)
{
  my_putstr("Request:\n");
  my_putstr("\tflag: '");
  my_putchar(request->flag);
  my_putstr("'\n\twidth: ");
  my_put_nbr(request->width);
  my_putstr("\n\tprecision: ");
  my_put_nbr(request->precision);
  my_putstr("\n\tlength: ");
  my_putstr(request->length);
  my_putstr("\n\tspecifier: ");
  my_putchar(request->specifier);
  my_putchar('\n');
}

int		main(int argc, char **argv)
{
  printf("%ce m'app%clle %cntoine.\n", 'J', 'e', 'A');
  my_printf("%ce m'app%clle %cntoine.\n", 'J', 'e', 'A');
  return (EXIT_SUCCESS);
}
