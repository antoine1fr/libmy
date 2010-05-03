/*
** ext_name.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:38:24 2010 antoine luciani
** Last update Sun Apr 25 22:38:24 2010 antoine luciani
*/

#include "token.h"
#include "my.h"

int		ext_name(char *str, t_list *list)
{
  int		len;
  t_token	*token;

  len = 0;
  while (IS_VALID_CHAR(str[len]))
    len += 1;
  token = xmalloc(sizeof(*token));
  token->type = TOK_TYPE_NAME;
  token->value = my_strndup(str, len);
  list_append_data(list, token);
  return (len);
}
