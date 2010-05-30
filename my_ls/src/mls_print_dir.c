/*
** mls_print_dir.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 30 20:25:25 2010 antoine luciani
** Last update Sun May 30 20:42:36 2010 antoine luciani
*/

#include <dirent.h>

#include "my.h"
#include "btree.h"
#include "list.h"
#include "my_ls.h"

void		mls_print_elt_details(const t_mls_element *elt_ptr)
{
  elt_ptr = 0;
}

void		mls_print_dir(const t_btree_node *node_ptr, char flags)
{
  t_mls_element	*elt_ptr;

  if (node_ptr)
    {
      if (flags & MLS_FLAG_DESC)
	mls_print_dir(node_ptr->right_ptr, flags);
      else
	mls_print_dir(node_ptr->left_ptr, flags);
      elt_ptr = (t_mls_element *)node_ptr->data;
      if (elt_ptr->dirent_ptr->d_name[0] != '.' ||
	  flags & MLS_FLAG_HIDDEN)
	{
	  if (flags & MLS_FLAG_DETAILS)
	    mls_print_elt_details(elt_ptr);
	  my_putstr(elt_ptr->dirent_ptr->d_name);
	  my_putchar('\n');
	}
      if (flags & MLS_FLAG_DESC)
	mls_print_dir(node_ptr->left_ptr, flags);
      else
	mls_print_dir(node_ptr->right_ptr, flags);
    }
}
