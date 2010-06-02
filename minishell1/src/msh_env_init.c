/*
** msh_env_init.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 15:07:01 2010 antoine luciani
** Last update Wed Jun  2 15:16:04 2010 antoine luciani
*/

#include "my.h"
#include "msh_environment.h"

void		msh_env_init(t_msh_env *envp, int size)
{
  if (envp)
    {
      if (size < 1)
	size = MSH_ENV_DEFAULT_SIZE;
      envp->array = xmalloc(sizeof(*envp->array) * (size + 1));
      envp->size = size;
      envp->used = 0;
    }
}
