/*
** msh_unsetenv_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Jun  4 13:29:25 2010 antoine luciani
** Last update Thu Jun 17 14:41:16 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

t_error		msh_unsetenv_command(char **argv)
{
  int		size;
  t_error	error;

  size = my_get_wordtab_size(argv) - 1;
  if (size == 2)
    {
      error = msh_env_remove(argv[1], &gl_env);
      if (error != ERROR_NONE)
	return (error);
    }
  else if (size == 1)
    return (ERROR_TOO_FEW_ARGS);
  else
    return (ERROR_TOO_MANY_ARGS);
  return (ERROR_NONE);
}
