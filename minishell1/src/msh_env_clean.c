/*
** msh_env_clean.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 19:32:51 2010 antoine luciani
** Last update Wed Jun  2 19:39:53 2010 antoine luciani
*/

#include <stdlib.h>
#include "my.h"
#include "msh_environment.h"

void		msh_env_clean(t_msh_env *envp)
{
  if (envp && envp->array)
    {
      my_free_to_wordtab(envp->array);
      free(envp->array);
      envp->used = 0;
      envp->size = 0;
    }
}
