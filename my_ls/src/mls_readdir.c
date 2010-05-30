/*
** mls_readdir.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 23:41:16 2010 antoine luciani
** Last update Sun May 30 22:20:51 2010 antoine luciani
*/

#include <sys/types.h>
#include <dirent.h>

#include "btree.h"
#include "list.h"
#include "my_ls.h"

t_error		mls_read_dir(const char *path, char flags,
			     t_btree *elt_tree, t_list *dir_list)
{
  DIR		*dir_ptr;

  if (!path || !elt_tree || !dir_list)
    return (ERROR_BAD_PARAM);
  if ((dir_ptr = opendir(path)) == 0)
    return (ERROR_BAD_PATH);
  while (mls_process_element(dir_ptr, path, flags,
			     elt_tree, dir_list))
    ;
  if (closedir(dir_ptr) == -1)
    return (ERROR_CLOSE_DIR);
  return (ERROR_NONE);
}
