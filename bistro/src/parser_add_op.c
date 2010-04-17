/*
** parser_add_op.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:18:55 2010 remy radix
** Last update Tue Apr  6 21:27:48 2010 remy radix
*/

#include "parser.h"
#include "list.h"
#include "exp_desc.h"
#include "token.h"
#include "my.h"
#include "bistromathique.h"

static int	get_op_prio(char c, t_exp_desc exp_desc)
{
  if (c == exp_desc.ops[OP_PLUS_IDX] ||
      c == exp_desc.ops[OP_SUB_IDX])
    return (OP_PRIO_LOW);
  return (OP_PRIO_HIGHT);
}

int		parser_add_op(char *s,
			      int shift,
			      t_list *list,
			      t_exp_desc exp_desc)
{
  t_token	*tok;

  tok = xmalloc(sizeof(*tok));
  tok->type = TOKEN_OP;
  tok->value = my_strndup(s, 1);
  tok->val_len = 1;
  tok->weight = shift + get_op_prio(s[0], exp_desc);
  list_app(list, tok);
  return (1);
}
