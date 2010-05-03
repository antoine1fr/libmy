/*
** create_decl.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:37:37 2010 antoine luciani
** Last update Sun Apr 25 22:37:38 2010 antoine luciani
*/

#include "token.h"
#include "decl.h"
#include "my.h"

t_list_node	*check_for_func_ptr(t_list_node *node, t_decl *decl_ptr)
{
  t_decl	*decl_tmp;

  decl_tmp = (t_decl *)node->data;
  while (decl_tmp->type != TOK_TYPE_NAME)
    {
      if (decl_tmp->type == TOK_TYPE_STAR)
	{
	  decl_ptr->type = DECL_TYPE_PTR_FUNC;
	  return (node);
	}
      node = node->next;
      decl_tmp = (t_decl *)node->data;
    }
  return (node);
}

t_list		*create_decl(t_list *tok_list)
{
  t_list_node		*node;
  t_decl		*decl_ptr;
  t_list		*decl_list;
  t_decl		*decl_tmp;

  if (tok_list == 0)
    return (0);
  decl_list = xmalloc(sizeof(*decl_list));
  list_init(decl_list);
  node = tok_list->first;
  decl_tmp = (t_decl *)node->data;
  while (node->next != 0)
    {
      decl_ptr = xmalloc(sizeof(*decl_ptr));
      decl_ptr->token_type = node->data;
      decl_ptr->type = DECL_TYPE_VAR;
      node = check_for_func_ptr(node->next, decl_ptr);
      decl_ptr->token_name = node->data;
      if (decl_tmp->type == TOK_TYPE_BEG_PAR && decl_ptr->type == DECL_TYPE_VAR)
	{
	  decl_ptr->type = DECL_TYPE_FUNC;
	  node = node->next->next;
	}
      node = node->next;
      decl_tmp = (t_decl *)node->data;
    }
  return (decl_list);
}
