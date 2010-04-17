/*
** parser_add_num.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:00:58 2010 remy radix
** Last update Tue Apr  6 21:28:00 2010 remy radix
*/

#include "my.h"
#include "parser.h"
#include "list.h"
#include "token.h"
#include "exp_desc.h"

int		parser_add_num(char *s,
			       t_list *list,
			       t_exp_desc exp_desc)
{
  int		size;
  t_token	*tok;

  tok = xmalloc(sizeof(*tok));
  list_app(list, tok);
  tok->type = TOKEN_NUM;
  tok->weight = 0;
  size = 1;
  while (parser_is_num(s[size], list->last, exp_desc))
    size++;
  tok->value = my_strndup(s, size);
  tok->val_len = size;
  return (size);
}

