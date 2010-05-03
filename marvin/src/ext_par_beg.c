/*
** ext_par_beg.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:37:48 2010 antoine luciani
** Last update Sun Apr 25 22:37:49 2010 antoine luciani
*/

#include "my.h"
#include "token.h"

int	ext_par_beg(char *str, t_list *list)
{
  t_token	*token;

  if (*str != '(')
    return (0);
  token = xmalloc(sizeof(*token));
  token->type = TOK_TYPE_BEG_PAR;
  token->value = 0;
  list_append_data(list, token);
  return (1);
}
