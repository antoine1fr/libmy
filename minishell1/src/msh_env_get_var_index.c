/*
** msh_env_get_var_index.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 16:29:16 2010 antoine luciani
** Last update Wed Jun  2 18:03:52 2010 antoine luciani
*/

#include "my.h"
#include "msh_environment.h"

int		msh_env_get_var_index(const char *key, t_msh_env *envp)
{
  int		key_len;
  int		i;

  if (!key || !envp)
    return (0);
  key_len = my_strlen(key);
  i = 0;
  while (i < envp->used)
    {
      if (!my_strncmp(envp->array[i], key, key_len))
	return (i);
      i += 1;
    }
  return (-1);
}
