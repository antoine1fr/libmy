/*
** btree_init.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 12:34:26 2010 antoine luciani
** Last update Mon May 24 12:45:16 2010 antoine luciani
*/

#include "my.h"
#include "btree.h"

void		btree_init(t_btree *tree_ptr, t_comp_func comp_func,
			   t_clean_data_func clean_func)
{
  if (!tree_ptr || !comp_func)
    return;
  tree_ptr->root_ptr = 0;
  tree_ptr->compare = comp_func;
  tree_ptr->clean_data = clean_func;
}
