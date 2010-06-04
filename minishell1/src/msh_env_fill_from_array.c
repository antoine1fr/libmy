/*
** msh_env_fill_from_array.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 18:24:54 2010 antoine luciani
** Last update Fri Jun  4 13:05:29 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

void		msh_env_fill_from_array(t_msh_env *envp, char **array)
{
  int		i;

  i = 0;
  while (envp && array && array[i])
    {
      if (envp->used >= envp->size)
	msh_env_resize(envp);
      envp->array[envp->used] = my_strdup(array[i]);
      i += 1;
      envp->used += 1;
    }
}
