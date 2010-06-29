/*
** transform_x.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:41:29 2010 antoine luciani
** Last update Tue Jun 29 18:50:00 2010 antoine luciani
*/

#include <stdarg.h>

#include "my.h"
#include "request.h"

#define HEXA_BASE "0123456789abcdef"

char		*transform_x(t_request MY_UNUSED *request, va_list *ap)
{
  int		n;

  n = va_arg(*ap, int);
  return (my_untostr(n, HEXA_BASE));
}
