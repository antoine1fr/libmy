/*
** btree_append_data.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 23:40:34 2010 antoine luciani
** Last update Mon May 24 23:40:35 2010 antoine luciani
*/

#include "my.h"
#include "btree.h"

void		btree_append_data(void *data, void *sort_data,
				  t_btree *tree_ptr)
{
  t_btree_node	*node_ptr;

  if (!data || !sort_data)
    return;
  node_ptr = xmalloc(sizeof(*node_ptr));
  node_ptr->data = data;
  node_ptr->sort_data = sort_data;
  btree_append_node(node_ptr, tree_ptr);
}
