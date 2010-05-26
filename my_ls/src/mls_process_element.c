/*
** mls_process_element.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed May 26 14:36:04 2010 antoine luciani
** Last update Wed May 26 14:47:20 2010 antoine luciani
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

t_bool		mls_process_element(DIR *dir_ptr, const char *root,
				    char flags, t_btree *elt_tree,
				    t_list *dir_list)
{
  struct dirent	*dirent_ptr;
  t_mls_element	*elt;
  char		*path;

  dirent_ptr = readdir(dir_ptr);
  if (!dirent_ptr)
    return (MLS_FALSE);
  path = mls_construct_path(root, dirent_ptr->d_name);
  elt = xmalloc(sizeof(*elt));
  elt->stat_ptr = xmalloc(sizeof(*(elt->stat_ptr)));
  if (stat(path, elt->stat_ptr) == -1)
    {
      perror(strerror(errno));
      free(elt->stat_ptr);
      free(elt);
      return (MLS_FALSE);
    }
  elt->dirent_ptr = dirent_ptr;
  if (flags & MLS_FLAG_BY_TIME)
    btree_append_data(elt, &(elt->stat_ptr->st_mtime), elt_tree);
  else
    btree_append_data(elt, elt->dirent_ptr->d_name, elt_tree);
  if (S_ISDIR(elt->stat_ptr->st_mode) && IS_VALID_DIR(elt))
    list_append_data(dir_list, my_strdup(dirent_ptr->d_name));
  free(path);
  return (MLS_TRUE);
}
