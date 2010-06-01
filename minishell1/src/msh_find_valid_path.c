/*
** msh_find_valid_path.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 16:54:50 2010 antoine luciani
** Last update Tue Jun  1 17:00:44 2010 antoine luciani
*/

#include <stdlib.h>
#include <unistd.h>

#include "minishell1.h"

int		msh_find_valid_path(const char *file_name, char **path_array)
{
  int		i;
  char		*full_path;

  i = 0;
  while (path_array[i] != 0)
    {
      full_path = msh_construct_full_path(file_name, path_array[i]);
      if (!access(full_path, F_OK))
	{
	  free(full_path);
	  return (i);
	}
      i += 1;
      free(full_path);
    }
  return (-1);
}
