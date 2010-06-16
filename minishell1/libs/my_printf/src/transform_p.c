/*
** transform_p.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 23:06:50 2010 antoine luciani
** Last update Thu Apr 29 23:12:42 2010 antoine luciani
*/

#include <stdarg.h>
#include <stdlib.h>

#include "my.h"
#include "request.h"

#define BASE_HEX "0123456789abcdef"

char		*transform_p(t_request *request, va_list *ap)
{
  unsigned int	n;
  char		*str;
  char		*final_str;

  n = va_arg(*ap, unsigned int);
  str = my_untostr(n, BASE_HEX);
  final_str = xmalloc(sizeof(*final_str) * (my_strlen(str) + 2));
  my_strcpy(final_str, "0x");
  my_strcpy(final_str + 2, str);
  free(str);
  return (final_str);
}
