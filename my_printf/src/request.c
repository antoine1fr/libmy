/*
** request.c for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Apr 16 17:30:59 2010 antoine luciani
** Last update Fri Apr 16 18:18:39 2010 antoine luciani
*/

#include "request.h"
#include "my.h"

#define IS_LENGTH(x) (x) == 'h' || (x) == 'l' || (x) == 'L'

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

static char	*get_nbr_move_forward(char **str, int *n)
{
  *n = my_getnbr(*str);
  while (*str[0] >= '1' && *str[0] <= '9')
    *str += 1;
}

static void	get_precision(char **str, t_request *request)
{
  if (*str[0] == '.')
    {
      *str += 1;
      if (*str[0] >= '0' && *str[0] <= '9')
	{
	  request->precision = my_getnbr(*str);
	  while (*str[0] >= '1' && *str[0] <= '9')
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
  if (*str >= '1' && *str <= '9')
    get_nbr_move_forward(&str, &request->width);
  else if (*str == '*')
    {
      request->width = MY_PRINTF_BULLET;
      str += 1;
    }
  get_precision(&str, request);
}
