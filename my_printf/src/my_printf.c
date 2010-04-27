/*
** my_printf.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:12:31 2010 antoine luciani
** Last update Mon Apr 26 11:35:16 2010 antoine luciani
*/

#include "my_printf.h"
#include "my.h"

#include <stdlib.h>
#include <stdarg.h>

char	*transform_c(t_request *request, va_list *ap);
char	*transform_b(t_request *request, va_list *ap);

typedef char	*(*t_trans_func) (t_request *request, va_list *ap);

typedef struct		s_transformation
{
  t_trans_func		launch;
  char			specifier;
}			t_transformation;

t_transformation	gl_trans_tab[] = {
  {transform_c, 'c'},
  {transform_b, 'b'},
  {0, 0}
};

static void	launch_transform(t_request *request, va_list *ap)
{
  int		i;
  char		*str;

  i = 0;
  while (gl_trans_tab[i].specifier != 0)
    {
      if (gl_trans_tab[i].specifier == request->specifier)
	{
	  str = gl_trans_tab[i].launch(request, ap);
	  print_request(str, request);
	  free(str);
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
