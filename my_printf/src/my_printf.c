/*
** my_printf.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:12:31 2010 antoine luciani
** Last update Wed Apr 21 10:51:06 2010 antoine luciani
*/

#include "my_printf.h"
#include "my.h"
#include <stdarg.h>

t_transformation	gl_trans_tab[] = {
  {transform_c, 'c'}
};

static void	launch_transform(t_request *request, va_list *ap_ptr)
{
}

void		my_printf(char *fmt, ...)
{
  va_list	ap;
  t_request	request;
  char		*ptr;

  va_start(ap, fmt);
  while (*fmt != 0)
    {
      if (*fmt != '%')
	  my_putchar(*fmt++);
      else
	{
	  fmt += 1;
	  if (*fmt == '%')
	    my_putchar(*fmt++);
	  else
	    {
	      ptr = parse_request(fmt, &request);
	      launch_transform(&request, &ap);
	    }
	}
    }
  va_end(ap);
}
