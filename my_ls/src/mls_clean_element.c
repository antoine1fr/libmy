/*
** mls_clean_element.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 30 20:55:26 2010 antoine luciani
** Last update Sun May 30 23:13:00 2010 antoine luciani
*/

#include <dirent.h>
#include <stdlib.h>

#include "my.h"
#include "list.h"
#include "btree.h"
#include "my_ls.h"

void		mls_clean_element(void *ptr)
{
  t_mls_element	*elt_ptr;

  if (!ptr)
    return;
  elt_ptr = (t_mls_element *)ptr;
  if (elt_ptr->dirent_ptr)
    free(elt_ptr->dirent_ptr);
  if (elt_ptr->stat_ptr)
    free(elt_ptr->stat_ptr);
  if (elt_ptr->root)
    free(elt_ptr->root);
  free(elt_ptr);
}
