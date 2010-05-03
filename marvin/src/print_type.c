/*
** print_type.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:38:14 2010 antoine luciani
** Last update Sun Apr 25 22:38:15 2010 antoine luciani
*/

#include <stdio.h>
#include "token.h"

extern char	*gl_types_tab[];

void		print_type(t_token *token_ptr)
{
  t_list	*list_ptr;
  t_list_node	*node_ptr;

  if (token_ptr->type != TOK_TYPE_TYPE)
    return;
  list_ptr = (t_list *)token_ptr->value;
  node_ptr = list_ptr->first;
  while (node_ptr->next != 0)
    {
      printf("pointeur sur");
      node_ptr = node_ptr->next;
    }
  printf("%s", (char *)list_ptr->last->data);
}
