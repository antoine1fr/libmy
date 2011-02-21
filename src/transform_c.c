/*
** transform_c.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:17:50 2010 antoine luciani
** Last update Mon Feb 21 12:53:03 2011 antoine luciani
*/

#include <stdarg.h>

#include "my.h"
#include "request.h"

char	*transform_c(t_request *request, va_list *ap)
{
  char	*str;

  str = xmalloc(sizeof(*str) * 2);
  str[0] = va_arg(*ap, int);
  str[1] = 0;
  request->is_number = 0;
  return (str);
}
