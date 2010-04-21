/*
** main.c for test my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 18 13:37:28 2010 antoine luciani
** Last update Wed Apr 21 09:50:01 2010 antoine luciani
*/

#include <stdlib.h>

#include "request.h"
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
  t_request	request;

  if (argc != 2)
    {
      my_putstr("Usage: test_my_printf %[flag][width][.precision][length]specifier\n");
      return (EXIT_FAILURE);
    }
  my_putstr("before parse_request\n");
  parse_request(argv[1], &request);
  my_putstr("after request\n");
  print_request(&request);
  return (EXIT_SUCCESS);
}





