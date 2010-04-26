/*
** transform_c.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:17:50 2010 antoine luciani
** Last update Wed Apr 21 16:17:50 2010 antoine luciani
*/

#include "my.h"
#include "request.h"

#include <stdarg.h>

void	transform_c(t_request *request, va_list *ap)
{
  char	c;

  c = va_arg(*ap, int);
  my_putchar(c);
}