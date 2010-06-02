/*
** msh_get_command_path.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 19:14:33 2010 antoine luciani
** Last update Wed Jun  2 12:16:29 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

char		*msh_get_command_path(const char *command, char * const env[])
{
  char		**path_array;
  const char	*env_path;
  char		*command_path;
  int		path_index;

  env_path = msh_get_env_path(env);
  command_path = 0;
  if (env_path)
    {
      path_array = my_str_to_wordtab_delim(env_path + 5, ':');
      path_index = msh_find_valid_path(command, path_array);
      if (path_index >= 0)
	command_path = my_strdup(path_array[path_index]);
      my_free_to_wordtab(path_array);
    }
  return (command_path);
}
