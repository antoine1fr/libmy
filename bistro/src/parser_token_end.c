/*
** parser_token_end.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:01:30 2010 remy radix
** Last update Sat Apr  3 19:32:29 2010 remy radix
*/

#include "token.h"
#include "exp_desc.h"
#include "parser.h"
#include "list.h"

int		parser_token_end(char *s,
				 t_list_node *last,
				 t_exp_desc exp_desc)
{
  int		i;
  t_token	*tok;

  tok = (t_token *)last->data;
  i = 1;
  while (s[i])
    {
      if (!((!last || (tok->type == TOKEN_OP)) &&
	    parser_is_num(s[i], last, exp_desc)))
	  return (i);
      if (!(last && (tok->type == TOKEN_NUM) &&
	    parser_is_op(s[i], exp_desc)))
	return (i);
      i++;
    }
  return (i);
}
