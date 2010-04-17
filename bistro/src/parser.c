/*
** parser.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 09:58:47 2010 remy radix
** Last update Wed Mar 31 13:56:41 2010 remy radix
*/

#include "list.h"
#include "token.h"
#include "bistromathique.h"
#include "exp_desc.h"
#include "parser.h"

static int	get_shift(char c, t_exp_desc exp_desc)
{
  if (c == exp_desc.ops[OP_OPEN_PARENT_IDX])
    return (OP_SHIFT);
  if (c == exp_desc.ops[OP_CLOSE_PARENT_IDX])
    return (-OP_SHIFT);
  return (0);
}

t_list		*parser(char *s, t_exp_desc exp_desc)
{
  int		i;
  int		shift;
  t_list	*list;

  i = 0;
  shift = 0;
  list = list_create();
  while (s[i])
    {
      if (parser_is_num(s[i], list->last, exp_desc))
	  i += parser_add_num(s + i, list, exp_desc);
      else if (parser_is_op(s[i], exp_desc))
	  i += parser_add_op(s + i, shift, list, exp_desc);
      else
	{
	  shift += get_shift(s[i], exp_desc);
	  i++;
	}
    }
  return (list);
}
