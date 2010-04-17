/*
** token.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:01:56 2010 remy radix
** Last update Wed Apr  7 11:09:01 2010 remy radix
*/

#include <stdlib.h>
#include "my.h"
#include "token.h"

t_token		*token_create(int type, int shift, char *value, int size)
{
  t_token	*res;

  res = xmalloc(sizeof(*res));
  res->type = type;
  res->value = value;
  res->val_len = size;
  res->weight = shift;
  return (res);
}

void		token_destroy(void **t)
{
  t_token	*token;

  if (!t || !(*t))
    return ;
  token = (t_token *)*t;
  if (token->value)
      free(token->value);
  free((*t));
  (*t) = 0;
}
