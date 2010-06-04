/*
** msh_env_resize.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 18:08:41 2010 antoine luciani
** Last update Fri Jun  4 13:05:17 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

void		msh_env_resize(t_msh_env *env_ptr)
{
  char		**new_arr;
  int		new_size;
  int		i;

  new_size = env_ptr->size + MSH_ENV_DEFAULT_SIZE;
  new_arr = xmalloc(sizeof(*new_arr) * (new_size + 1));
  i = 0;
  while (i < env_ptr->used)
    {
      new_arr[i] = env_ptr->array[i];
      i += 1;
    }
  while (i < new_size)
    new_arr[i++] = 0;
  free(env_ptr->array);
  env_ptr->array = new_arr;
  env_ptr->size = new_size;
}
