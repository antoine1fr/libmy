/*
** main.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 12:00:53 2010 antoine luciani
** Last update Wed Jun 16 14:48:19 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "my_printf.h"
#include "get_next_line.h"
#include "minishell1.h"
#include "msh_environment.h"

t_msh_bool	gl_b_quit_app;
t_msh_env	gl_env;

int		main(int UNUSED argc, char UNUSED **argv,
		     char **env)
{
  char		*command;
  char		**wordtab;

  gl_b_quit_app = MY_FALSE;
  msh_env_init(&gl_env, 0);
  msh_env_fill_from_array(&gl_env, env);
  while (!gl_b_quit_app)
    {
      my_putstr("$> ");
      command = get_next_line(0);
      if (command)
	{
	  wordtab = my_str_to_wordtab_delim(command, ' ');
	  free(command);
	  msh_print_error(wordtab[0], msh_launch_command(wordtab, env));
	  my_free_to_wordtab(wordtab);
	}
      else
	my_puterr("[ERROR] : the command does not exist!\n");
    }
  msh_env_clean(&gl_env);
  return (EXIT_SUCCESS);
}
