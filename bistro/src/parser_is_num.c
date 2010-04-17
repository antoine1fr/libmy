/*
** parser_is_num.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:01:14 2010 remy radix
** Last update Wed Mar 31 14:23:52 2010 remy radix
*/

#include "parser.h"
#include "exp_desc.h"
#include "token.h"
#include "bistromathique.h"
#include "list.h"

int		parser_is_num(char c, t_list_node *last, t_exp_desc exp_desc)
{
  int		i;

  if (c == exp_desc.ops[OP_NEG_IDX] &&
      (!last || ((t_token *)last->data)->type == TOKEN_OP))
      return (1);
  i = 0;
  while (exp_desc.base[i])
    {
      if (c == exp_desc.base[i])
	  return (1);
      i++;
    }
  return (0);
}
