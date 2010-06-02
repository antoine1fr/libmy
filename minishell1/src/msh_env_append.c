/*
** msh_env_append.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 15:16:49 2010 antoine luciani
** Last update Wed Jun  2 19:17:38 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "msh_environment.h"

char		*msh_env_const_var(const char *key, const char *value)
{
  int		key_len;
  int		var_len;
  int		value_len;
  char		*var;

  key_len = my_strlen(key);
  value_len = my_strlen(value);
  var_len = key_len + value_len + 1;
  var = xmalloc(sizeof(*var) * (var_len + 1));
  my_strncpy(var, key, key_len);
  my_strncpy(var + key_len, "=", 1);
  my_strcpy(var + key_len + 1, value);
  var[var_len] = 0;
  return (var);
}

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
	  my_putstr(envp->array[i]);
	  free(envp->array[i]);
	  envp->array[i] = var;
	}
    }
}
