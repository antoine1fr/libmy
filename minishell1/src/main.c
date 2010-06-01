/*
** main.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 12:00:53 2010 antoine luciani
** Last update Tue Jun  1 20:23:19 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "my_printf.h"
#include "get_next_line.h"
#include "minishell1.h"

#define UNUSED __attribute__((unused))

int		main(int UNUSED argc, const char UNUSED **argv, const char **env)
{
  char		*command_path;
  char		*command;

  while (42)
    {
      my_putstr("$> ");
      command = get_next_line(0);
      command_path = msh_get_command_path(command, env);
      free(command);
      if (command_path)
	{
	  my_printf("%s\n", command_path);
	  free(command_path);
	}
      else
	my_puterr("[ERROR] : the command does not exist!\n");
    }
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
