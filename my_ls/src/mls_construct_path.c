/*
** mls_construct_path.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed May 26 14:47:06 2010 antoine luciani
** Last update Wed May 26 15:35:09 2010 antoine luciani
*/

#include <dirent.h>

#include "my.h"
#include "list.h"
#include "btree.h"
#include "my_ls.h"

char		*mls_construct_path(const char *root, const char *rel_path)
{
  char		*path;
  int		len;
  int		root_len;
  int		rel_len;
  int		jump;

  root_len = my_strlen(root);
  rel_len = my_strlen(root);
  len = root_len + rel_len;
  path = xmalloc(sizeof(*path) * (len + 2));
  my_strcpy(path, root);
  jump = root[root_len - 1] != '/';
  if (jump)
      my_strcpy(path + root_len, "/");
  my_strcpy(path + root_len + jump, rel_path);
  return (path);
}
