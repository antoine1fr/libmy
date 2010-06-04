/*
** msh_env_get_var_index.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 16:29:16 2010 antoine luciani
** Last update Fri Jun  4 13:04:50 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

int		msh_env_get_var_index(const char *key, t_msh_env *envp)
{
  int		key_len;
  int		i;
  char		*pattern;

  if (!key || !envp)
    return (0);
  pattern = msh_env_const_var(key, "");
  key_len = my_strlen(pattern);
  i = 0;
  while (i < envp->used)
    {
      if (!my_strncmp(envp->array[i], pattern, key_len))
	{
	  free(pattern);
	  return (i);
	}
      i += 1;
    }
  free(pattern);
  return (-1);
}
