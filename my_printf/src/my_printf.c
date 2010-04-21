/*
** my_printf.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:12:31 2010 antoine luciani
** Last update Wed Apr 21 16:20:31 2010 antoine luciani
*/

#include "my_printf.h"
#include "my.h"
#include <stdarg.h>

void	transform_c(t_request *request, va_list *ap);

typedef void	(*t_trans_func) (t_request *request, va_list *ap);

typedef struct		s_transformation
{
  t_trans_func		launch;
  char			specifier;
}			t_transformation;

t_transformation	gl_trans_tab[] = {
  {transform_c, 'c'},
  {0, 0}
};

static void	launch_transform(t_request *request, va_list *ap)
{
  int		i;

  i = 0;
  while (gl_trans_tab[i].specifier != 0)
    {
      if (gl_trans_tab[i].specifier == request->specifier)
	{
	  gl_trans_tab[i].launch(request, ap);
	  return;
	}
      i += 1;
    }
}

void		my_printf(char *fmt, ...)
{
  va_list	ap;
  t_request	request;

  va_start(ap, fmt);
  while (*fmt != 0)
    {
      if (*fmt != '%')
	  my_putchar(*fmt++);
      else
	{
	  if (*(fmt + 1) == '%')
	    {
	      my_putchar(*(fmt + 1));
	      fmt += 1;
	    }
	  else
	    {
	      fmt = parse_request(fmt, &request);
	      launch_transform(&request, &ap);
	    }
	}
    }
  va_end(ap);
}
