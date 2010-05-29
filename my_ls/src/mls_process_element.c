/*
** mls_process_element.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed May 26 14:36:04 2010 antoine luciani
** Last update Sat May 29 18:29:09 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#include "my.h"
#include "list.h"
#include "btree.h"
#include "my_ls.h"

#define IS_VALID_DIR(x) (my_strcmp((x)->dirent_ptr->d_name, "..") &&	\
			 my_strcmp((x)->dirent_ptr->d_name, "."))

static t_bool	mls_process_dirent(t_mls_element *elt_ptr, DIR *dir_ptr)
{
  struct dirent	*dirent_ptr;

  dirent_ptr = readdir(dir_ptr);
  if (!dirent_ptr)
    return (MLS_FALSE);
  elt_ptr->dirent_ptr = xmalloc(sizeof(*(elt_ptr->dirent_ptr)));
  my_memcpy(elt_ptr->dirent_ptr, dirent_ptr, sizeof(*dirent_ptr));
  return (MLS_TRUE);
}

static void	mls_clean_element(t_mls_element *elt_ptr)
{
  if (!elt_ptr)
    return;
  if (elt_ptr->dirent_ptr)
    free(elt_ptr->dirent_ptr);
  if (elt_ptr->stat_ptr)
    free(elt_ptr->dirent_ptr);
  free(elt_ptr);
}

t_bool		mls_process_element(DIR *dir_ptr, const char *root,
				    char flags, t_btree *elt_tree,
				    t_list *dir_list)
{
  t_mls_element	*elt;
  char		*path;

  elt = xmalloc(sizeof(*elt));
  if (mls_process_dirent(elt, dir_ptr) == MLS_FALSE)
    {
      mls_clean_element(elt);
      return (MLS_FALSE);
    }
  path = mls_construct_path(root, elt->dirent_ptr->d_name);
  elt->stat_ptr = xmalloc(sizeof(*(elt->stat_ptr)));
  if (stat(path, elt->stat_ptr) == -1)
    {
      perror(strerror(errno));
      mls_clean_element(elt);
      return (MLS_FALSE);
    }
  if (flags & MLS_FLAG_BY_TIME)
    btree_append_data(elt, &(elt->stat_ptr->st_mtime), elt_tree);
  else
    btree_append_data(elt, elt->dirent_ptr->d_name, elt_tree);
  if (S_ISDIR(elt->stat_ptr->st_mode) && IS_VALID_DIR(elt))
    list_append_data(dir_list, my_strdup(elt->dirent_ptr->d_name));
  free(path);
  my_putstr(path);
  my_putchar('\n');
  return (MLS_TRUE);
}
