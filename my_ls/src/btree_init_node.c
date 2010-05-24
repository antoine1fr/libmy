/*
** btree_init_node.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 10:43:03 2010 antoine luciani
** Last update Mon May 24 10:56:24 2010 antoine luciani
*/

#include "my.h"
#include "btree.h"

void		btree_init_node(t_btree_node **node_ptr)
{
  if (!node_ptr)
    return;
  else if (*node_ptr == 0)
    node_ptr = xmalloc(sizeof(**node_ptr));
  my_memset(*node_ptr, 0, sizeof(**node_ptr));
}
