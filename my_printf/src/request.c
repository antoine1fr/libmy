/*
** request.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Apr 16 17:30:59 2010 antoine luciani
** Last update Sat Apr 17 19:06:32 2010 antoine luciani
*/

#include "request.h"
#include "my.h"

#define IS_LENGTH(x) (x) == 'h' || (x) == 'l' || (x) == 'L'
#define IS_NUMBER(x) (x) >= '0' && (x) <= '9'
#define IS_NUM_NOT_NULL(x) (x) >= '9' && (x) <= '9'

const char	*gl_flags_tab = "-+ #0";

static int	is_flag(char c)
{
  int		i;

  i = 0;
  while (gl_flags_tab[i] != 0)
    {
      if (gl_flags_tab[i] == c)
	return (1);
      i += 1;
    }
  return (0);
}

static void	get_width(char **str, t_request *request)
{
  if (IS_NUM_NOT_NULL(*str[0]))
    {
      request->width = my_getnbr(*str);
      while (IS_NUM_NOT_NULL(*str[0]))
	*str += 1;
    }
  else if (*str[0] == MY_PRINTF_BULLET)
    {
      request->width = MY_PRINTF_BULLET;
      *str += 1;
    }
}

static void	get_precision(char **str, t_request *request)
{
  if (*str[0] == '.')
    {
      *str += 1;
      if (IS_NUMBER(*str[0]))
	{
	  request->precision = my_getnbr(*str);
	  while (IS_NUM_NOT_NULL(*str[0]))
	    *str += 1;
	}
      else if (*str[0] == '*')
	{
	  request->precision = MY_PRINTF_BULLET;
	  *str += 1;
	}
    }
}

char		*parse_request(char *str, t_request *request)
{
  if (!str || *str != '%' || !request)
    return (0);
  if (is_flag(*str))
    {
      request->flag = *str;
      str += 1;
    }
  get_width(&str, request);
  get_precision(&str, request);
  request->specifier = *str;
  str += 1;
  return (str);
}
