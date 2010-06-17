/*
** msh_setenv_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 14:56:24 2010 antoine luciani
** Last update Thu Jun 17 14:47:50 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

t_error		msh_setenv_command(char **argv)
{
  int		arg_count;

  arg_count = my_get_wordtab_size(argv) - 1;
  if (arg_count == 3)
    msh_env_append(argv[1], argv[2], &gl_env);
  else if (arg_count == 1)
    msh_env_command(0);
  else if (arg_count == 2)
  {
    if (msh_unsetenv_command(argv) == ERROR_UNKNOWN_VAR)
      msh_env_append(argv[1], "", &gl_env);
    return (ERROR_NONE);
  }
  else
    return (ERROR_TOO_MANY_ARGS);
  return (ERROR_NONE);
}
