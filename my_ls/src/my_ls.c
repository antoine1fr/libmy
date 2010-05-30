/*
** my_ls.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 30 20:19:39 2010 antoine luciani
** Last update Sun May 30 22:45:53 2010 antoine luciani
*/

#include <dirent.h>
#include <stdlib.h>

#include "my.h"
#include "list.h"
#include "btree.h"
#include "my_ls.h"

t_error		my_ls_sub(const char *path, char flags,
			  t_list *dir_list)
{
  t_btree	elt_tree;
  t_error	error;

  if (flags & MLS_FLAG_BY_TIME)
    btree_init(&elt_tree, mls_comp_times, mls_clean_element);
  else
    btree_init(&elt_tree, mls_comp_strings, mls_clean_element);
  list_init(dir_list, free);
  error = mls_read_dir(path, flags, &elt_tree, dir_list);
  if (error != ERROR_NONE)
    return (error);
  mls_print_dir(elt_tree.root_ptr, flags);
  btree_clean(&elt_tree);
  return (ERROR_NONE);
}

t_error		my_ls(const char *path, char flags)
{
  t_list	dir_list;
  t_list_node	*node_ptr;
  t_error	error;

  error = my_ls_sub(path, flags, &dir_list);
  if (error != ERROR_NONE)
    return (error);
  if (flags & MLS_FLAG_RECURSIVE)
    {
      node_ptr = dir_list.first;
      while (node_ptr)
	{
	  error = my_ls((char *)node_ptr->data, flags);
	  if (error != ERROR_NONE)
	    return (error);
	  node_ptr = node_ptr->next;
	}
    }
  list_clean(&dir_list);
  return (ERROR_NONE);
}
