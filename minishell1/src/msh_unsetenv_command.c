/*
** msh_unsetenv_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Jun  4 13:29:25 2010 antoine luciani
** Last update Fri Jun  4 16:18:00 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

void		msh_unsetenv_command(char **argv)
{
  int		size;
  t_error	error;

  size = my_get_wordtab_size(argv);
  if (size == 3)
    {
      error = msh_env_remove(argv[1], &gl_env);
      if (error == ERROR_BAD_PARAM)
	my_puterr("unsetenv: to few arguments!");
      else if (error == ERROR_UNKNOWN_VAR)
	{
	  my_puterr("unsetenv: unknown variable ('");
	  my_puterr(argv[1]);
	  my_puterr("')\n");
	}
    }
  else
    my_puterr("unsetenv : Too few arguments!\n");
}
