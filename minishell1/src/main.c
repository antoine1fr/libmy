/*
** main.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 12:00:53 2010 antoine luciani
** Last update Wed Jun  2 12:13:21 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "my_printf.h"
#include "get_next_line.h"
#include "minishell1.h"

#define UNUSED __attribute__((unused))

int		main(int UNUSED argc, char UNUSED **argv,
		     char *env[])
{
  char		*command;

  while (42)
    {
      my_putstr("$> ");
      command = get_next_line(0);
      if (command)
	{
	  my_printf("Execing command '%s'...\n", command);
	  msh_launch_command(command, env);
	  free(command);
	}
      else
	my_puterr("[ERROR] : the command does not exist!\n");
    }
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
