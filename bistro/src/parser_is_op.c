/*
** parser_is_op.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:01:21 2010 remy radix
** Last update Wed Mar 31 11:43:42 2010 remy radix
*/

#include "parser.h"
#include "exp_desc.h"
#include "bistromathique.h"

int		parser_is_op(char c, t_exp_desc exp_desc)
{
  int		i;

  i = 0;
  while (exp_desc.ops[i])
    {
      if (c == exp_desc.ops[i] &&
	  i != OP_OPEN_PARENT_IDX &&
	  i != OP_CLOSE_PARENT_IDX)
	return (1);
      i++;
    }
  return (0);
}
