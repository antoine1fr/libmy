/*
** my_printf.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:12:31 2010 antoine luciani
** Last update Mon Feb 21 12:53:13 2011 antoine luciani
*/

#include <stdlib.h>
#include <stdarg.h>

#include "my_printf.h"
#include "my.h"

char	*transform_c(t_request *request, va_list *ap);
char	*transform_b(t_request *request, va_list *ap);
char	*transform_S(t_request *request, va_list *ap);
char	*transform_s(t_request *request, va_list *ap);
char	*transform_d(t_request *request, va_list *ap);
char	*transform_x(t_request *request, va_list *ap);
char	*transform_X(t_request *request, va_list *ap);
char	*transform_u(t_request *request, va_list *ap);
char	*transform_o(t_request *request, va_list *ap);
char	*transform_p(t_request *request, va_list *ap);

typedef char	*(*t_trans_func) (t_request *request, va_list *ap);

typedef struct		s_transformation
{
  t_trans_func		launch;
  char			specifier;
}			t_transformation;

t_transformation	gl_trans_tab[] = {
  {transform_c, 'c'},
  {transform_b, 'b'},
  {transform_S, 'S'},
  {transform_s, 's'},
  {transform_d, 'd'},
  {transform_d, 'i'},
  {transform_x, 'x'},
  {transform_X, 'X'},
  {transform_u, 'u'},
  {transform_o, 'o'},
  {transform_p, 'p'},
  {0, 0}
};

void		launch_transform(t_request *request, va_list *ap)
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
  my_putchar(request->specifier);
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
	      fmt += 2;
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
