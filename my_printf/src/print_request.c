/*
** print_request.c for my_printf in /u/all/lucian_b/cu/work/projects/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 29 22:41:36 2010 antoine luciani
** Last update Thu Apr 29 22:41:37 2010 antoine luciani
*/

#include "request.h"
#include "my.h"

void		print_request(char *str, t_request *request)
{
  int		i;
  int		remaining;

  if (!str || !request)
    return;
  remaining =  request->width - my_strlen(str);
  i = 0;
  while (i++ < remaining && request->flag != '+')
      my_putchar(' ');
  my_putstr(str);
  i = 0;
  while (i++ < remaining && request->flag == '+')
    {
      if (request->flag == '0' && request->is_number)
	my_putchar('0');
      else
	my_putchar(' ');
    }
}
