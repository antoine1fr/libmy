/*
** msh_construct_full_path.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 16:54:11 2010 antoine luciani
** Last update Wed Jun  2 13:58:09 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

char		*msh_construct_full_path(const char *file_name, const char *path)
{
  int		len;
  int		file_name_len;
  int		path_len;
  char		*full_path;

  if (!file_name)
    return (0);
  file_name_len = my_strlen(file_name);
  path_len = my_strlen(path);
  len = file_name_len + path_len + 1;
  full_path = xmalloc((len + 1) * sizeof(*full_path));
  my_strcpy(full_path, path);
  full_path[path_len] = '/';
  my_strcpy(full_path + path_len + 1, file_name);
  full_path[len] = 0;
  return (full_path);
}
