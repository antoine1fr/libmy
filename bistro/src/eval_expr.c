/*
** eval_expr.c for bistro in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Apr  7 18:25:08 2010 remy radix
** Last update Wed Apr  7 18:45:07 2010 remy radix
*/

#include "exp_desc.h"
#include "my.h"
#include "list.h"
#include "bin_tree.h"
#include "bistromathique.h"
#include <stdlib.h>
#include "parser.h"
#include "token.h"

char		*eval_expr(char *base, char *ops, char *exp, unsigned int size)
{
  t_exp_desc	exp_desc;
  t_list	*token_list;
  t_bin_tree	*root;
  char		*res;

  exp_desc.ops = ops;
  exp_desc.base = base;
  exp_desc.base_len = my_strlen(base);
  if (!syntaxe_check(exp, exp_desc))
    {
      my_putstr(SYNTAXE_ERROR_MSG);
      my_putchar('\n');
      return ("");
    }
  token_list = parser(exp, exp_desc);
  root = bin_tree_create(token_list);
  list_destroy(token_list, 0);
  bin_tree_destroy(&root, token_destroy);
  return ("");
}
