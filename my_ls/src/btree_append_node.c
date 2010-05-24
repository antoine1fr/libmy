/*
** btree_append_node.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 12:41:37 2010 antoine luciani
** Last update Mon May 24 12:54:51 2010 antoine luciani
*/

#include "btree.h"

void		btree_append_node(t_btree_node *node_ptr, t_btree *tree_ptr)
{
  t_btree_node	**current;

  if (!node_ptr || !tree_ptr)
    return;
  current = &(tree_ptr->root_ptr);
  while (*current != 0)
    {
      if (tree_ptr->compare(node_ptr->sort_data, (*current)->sort_data) < 0)
	*current = (*current)->left_ptr;
      else
	*current = (*current)->right_ptr;
    }
  *current = node_ptr;
}
