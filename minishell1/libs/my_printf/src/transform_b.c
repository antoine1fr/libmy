/*
** transform_b.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Apr 26 11:39:44 2010 antoine luciani
** Last update Mon Apr 26 11:58:18 2010 antoine luciani
*/

#include "request.h"
#include "my.h"

#include <stdarg.h>

#define BINARY_BASE "01"

char		*transform_b(t_request *request, va_list *ap)
{
  unsigned int	nb;

  nb = va_arg(*ap, unsigned int);
  request->is_number = 1;
  return (my_untostr(nb, BINARY_BASE));
}
