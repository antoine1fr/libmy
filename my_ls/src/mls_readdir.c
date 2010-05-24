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

#define IS_VALID_DIR(x) (!my_strcmp((x)->dirent_ptr->d_name, "..") &&	\
			  !my_strcmp((x)->dirent_ptr->d_name, "."))

t_bool		mls_process_element(DIR *dir_ptr, char flags ,
				    t_btree *elt_tree, t_list *dir_list)
{
  struct dirent	*dirent_ptr;
  t_mls_element	*elt;

  dirent_ptr = readdir(dir_ptr);
  if (!dirent_ptr)
    return (MLS_FALSE);
  elt = xmalloc(sizeof(*elt));
  elt->stat_ptr = xmalloc(sizeof(*(elt->stat_ptr)));
  if (stat(dirent_ptr->d_name, elt->stat_ptr) == -1)
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
  while (mls_process_element(dir_ptr, flags, elt_tree, dir_list))
    ;
  if (closedir(dir_ptr) != 0)
    return (ERROR_CLOSE_FILE);
  return (ERROR_NONE);
}
