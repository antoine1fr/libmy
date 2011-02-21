/*
** transform_s.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:39:56 2010 antoine luciani
** Last update Mon Feb 21 12:54:28 2011 antoine luciani
*/

#include <stdarg.h>

#include "my.h"
#include "request.h"

char		*transform_s(t_request MY_UNUSED *request, va_list *ap)
{
  char		*str;

  str = my_strdup(va_arg(*ap, char *));
  return (str);
}
