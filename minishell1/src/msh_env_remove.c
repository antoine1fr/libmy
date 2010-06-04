/*
** msh_env_remove.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Jun  4 13:00:42 2010 antoine luciani
** Last update Fri Jun  4 13:59:39 2010 antoine luciani
*/

#include <stdlib.h>

#include "my_printf.h"
#include "minishell1.h"
#include "msh_environment.h"

static void	msh_env_move_back(char **array)
{
  int		i;

  i = 0;
  while (array && array[i])
    {
      array[i] = array[i + 1];
      i += 1;
    }
}

t_error		msh_env_remove(const char *key, t_msh_env *envp)
{
  int		index;

  if (!key || !envp)
    return (ERROR_BAD_PARAM);
  index = msh_env_get_var_index(key, envp);
  if (index == -1)
    return (ERROR_UNKNOWN_VAR);
  free(envp->array[index]);
  msh_env_move_back(&(envp->array[index]));
  envp->used -= 1;
  return (ERROR_NONE);
}
