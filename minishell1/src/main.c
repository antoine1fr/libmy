/*
** main.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 12:00:53 2010 antoine luciani
** Last update Tue Jun  1 19:29:44 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

#define UNUSED __attribute__((unused))

int		main(int argc, const char **argv, const char **env)
{
  char		*command_path;

  if (argc == 2)
    {
      command_path = msh_get_command_path(argv[1], env);
      if (command_path)
	{
	  my_putstr(command_path);
	  free(command_path);
	}
      else
	my_puterr("[ERROR] : the command does not exist!");
    }
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
