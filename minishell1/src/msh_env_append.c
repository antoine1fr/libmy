/*
** msh_env_append.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 15:16:49 2010 antoine luciani
** Last update Fri Jun  4 13:04:23 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

void		msh_env_append(const char *key, const char *value,
			       t_msh_env *envp)
{
  char		*var;
  int		i;

  if (key && value && envp)
    {
      var = msh_env_const_var(key, value);
      i = msh_env_get_var_index(key, envp);
      if (i == -1)
	{
	  if (envp->used >= envp->size)
	    msh_env_resize(envp);
	  envp->array[envp->used] = var;
	  envp->used += 1;
	}
      else
	{
	  free(envp->array[i]);
	  envp->array[i] = var;
	}
    }
}
