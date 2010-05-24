/*
** btree_clean.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 23:40:54 2010 antoine luciani
** Last update Mon May 24 23:40:55 2010 antoine luciani
*/

#include <stdlib.h>
#include "btree.h"

static void	btree_clean_node(t_btree_node *node_ptr,
				 t_clean_data_func clean_func)
{
  if (!node_ptr)
    return;
  btree_clean_node(node_ptr->left_ptr, clean_func);
  btree_clean_node(node_ptr->right_ptr, clean_func);
  if (clean_func)
    clean_func(node_ptr->data);
  free(node_ptr);
}

void		btree_clean(t_btree *tree_ptr)
{
  btree_clean_node(tree_ptr->root_ptr, tree_ptr->clean_data);
  tree_ptr->root_ptr = 0;
}
