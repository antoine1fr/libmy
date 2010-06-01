/*
** transform_d.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:41:58 2010 antoine luciani
** Last update Thu Apr 29 22:41:58 2010 antoine luciani
*/

#include "my.h"
#include "request.h"
#include <stdarg.h>

#define DECIMAL_BASE	"0123456789"

char		*transform_d(t_request *request, va_list *ap)
{
  int		n;

  n = va_arg(*ap, int);
  return (my_ntostr(n, DECIMAL_BASE));
}
