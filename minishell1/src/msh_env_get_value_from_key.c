/*
** msh_env_get_value_from_key.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Jun  4 15:29:19 2010 antoine luciani
** Last update Fri Jun  4 15:35:17 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

const char	*msh_env_get_value_from_key(const char *key)
{
  char		*value;
  int		index;

  if (key)
    {
      index = msh_env_get_var_index(key, &gl_env);
      if (index == -1)
	return (0);
      value = gl_env.array[index] + my_strlen(key) + 1;
      return (value);
    }
  return (0);
}
