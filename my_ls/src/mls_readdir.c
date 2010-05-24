#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#include "btree.h"
#include "list.h"
#include "my.h"
#include "my_ls.h"

#define IS_VALID_DIR(x) (my_strcmp((x)->dirent_ptr->d_name, "..") &&	\
			 my_strcmp((x)->dirent_ptr->d_name, "."))

char		*mls_construct_path(const char *root, const char *rel_path)
{
  char		*path;
  int		len;
  int		root_len;
  int		rel_len;

  root_len = my_strlen(root);
  rel_len = my_strlen(root);
  len = root_len + rel_len;
  path = xmalloc(sizeof(*path) * (len + 2));
  my_strcpy(path, root);
  my_strcpy(path + root_len, "/");
  my_strcpy(path + root_len + 1, rel_path);
  return (path);
}

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
  if (closedir(dir_ptr) != 0)
    return (ERROR_CLOSE_FILE);
  return (ERROR_NONE);
}
