/*
** msh_unsetenv_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Jun  4 13:29:25 2010 antoine luciani
** Last update Wed Jun 16 15:07:05 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

t_error		msh_unsetenv_command(char **argv)
{
  int		size;
  t_error	error;

  size = my_get_wordtab_size(argv);
  if (size == 3)
    {
      error = msh_env_remove(argv[1], &gl_env);
      if (error != ERROR_NONE)
	return (error);
    }
  else
    return (ERROR_BAD_PARAM);
  return (ERROR_NONE);
}
