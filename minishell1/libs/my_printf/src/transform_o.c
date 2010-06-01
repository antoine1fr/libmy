/*
** transform_o.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:48:24 2010 antoine luciani
** Last update Thu Apr 29 22:55:07 2010 antoine luciani
*/

#include <stdarg.h>

#include "my.h"
#include "request.h"

#define BASE_OCT "01234567"

char		*transform_o(t_request *request, va_list *ap)
{
  unsigned int	n;

  n = va_arg(*ap, unsigned int);
  return (my_untostr(n, BASE_OCT));
}
