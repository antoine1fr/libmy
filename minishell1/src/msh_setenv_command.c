/*
** msh_setenv_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 14:56:24 2010 antoine luciani
** Last update Wed Jun 16 15:08:21 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

t_error		msh_setenv_command(char **argv)
{
  int		arg_count;

  arg_count = my_get_wordtab_size(argv);
  if (arg_count == 4)
    msh_env_append(argv[1], argv[2], &gl_env);
  else if (arg_count == 2)
    msh_env_command(0);
  else
    return (ERROR_BAD_PARAM);
  return (ERROR_NONE);
}
