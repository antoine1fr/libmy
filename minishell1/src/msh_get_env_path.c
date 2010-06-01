/*
** msh_get_env_path.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 17:07:26 2010 antoine luciani
** Last update Tue Jun  1 17:11:36 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

const char	*msh_get_env_path(const char **env)
{
  int		size;
  int		i;

  i = 0;
  while (env[i])
    {
      size = my_strlen(env[i]);
      if (size >= 6 && my_strncmp(env[i], "PATH=", 5) == 0)
	return (env[i]);
      i += 1;
    }
  return (0);
}
