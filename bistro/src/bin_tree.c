/*
** bin_tree.c for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 09:59:12 2010 remy radix
** Last update Wed Apr  7 17:44:56 2010 remy radix
*/

#include <stdlib.h>
#include "my.h"
#include "list.h"
#include "token.h"
#include "bin_tree.h"

static int		compare_prio(void *token, void *prio)
{
  return (((t_token *)token)->weight - (*(int *)(prio)));
}

static t_list_node	*get_lower_prio_op(t_list *list)
{
  t_list_node		*cur;
  int			lower_prio;
  t_token		*token;

  cur = list->first;
  lower_prio = 100000;
  while (cur)
    {
      token = (t_token *)cur->data;
      if (token->type == TOKEN_OP &&
	  token->weight < lower_prio)
	lower_prio = token->weight;
      cur = cur->next;
    }
  if (lower_prio == 100000)
    return (list->first);
  cur = list_get_last_node(list, &lower_prio, compare_prio);
  return (cur);
}

t_bin_tree	*bin_tree_create(t_list *list)
{
  t_list_node	*node;
  t_bin_tree	*root;
  t_list	*sub;
  t_token	*token;

  if (!list)
    return (0);
  node = get_lower_prio_op(list);
  token = (t_token *)(node->data);
  root = xmalloc(sizeof(*root));
  root->left = 0;
  root->right = 0;
  root->data = node->data;
  if (token->type == TOKEN_NUM)
    return (root);
  sub = list_sub_list(list->first, node);
  root->left = bin_tree_create(sub);
  list_destroy(sub, 0);
  sub = list_sub_list(node->next, 0);
  root->right = bin_tree_create(sub);
  list_destroy(sub, 0);
  return (root);
}

void		bin_tree_destroy(t_bin_tree **root, void (*destroy_func)())
{
  if (!root || !(*root))
    return ;
  bin_tree_destroy(&(*root)->right, destroy_func);
  bin_tree_destroy(&(*root)->left, destroy_func);
  if (destroy_func)
      destroy_func(&((*root)->data));
  free((*root));
  (*root) = 0;
}
