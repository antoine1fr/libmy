/*
** transform_s.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:39:56 2010 antoine luciani
** Last update Thu Apr 29 22:39:57 2010 antoine luciani
*/

#include "my.h"
#include "request.h"
#include <stdarg.h>

char		*transform_s(t_request *request, va_list *ap)
{
  char		*str;

  str = my_strdup(va_arg(*ap, char *));
  return (str);
}
