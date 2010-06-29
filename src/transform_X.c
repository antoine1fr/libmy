/*
** transform_X.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:40:58 2010 antoine luciani
** Last update Tue Jun 29 18:48:46 2010 antoine luciani
*/

#include "my.h"
#include "request.h"

#include <stdarg.h>

#define HEX_BASE "0123456789ABCDEF"

char		*transform_X(t_request MY_UNUSED *request, va_list *ap)
{
  unsigned int	n;

  n = va_arg(*ap, unsigned int);
  return (my_untostr(n, HEX_BASE));
}
