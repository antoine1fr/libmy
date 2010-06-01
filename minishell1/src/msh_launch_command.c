/*
** msh_launch_command.c for minishell in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 17:38:33 2010 antoine luciani
** Last update Tue Jun  1 19:57:40 2010 antoine luciani
*/

#include <unistd.h>

#include "my.h"
#include "minishell1.h"

t_error		msh_launch_command(const char *executable, const char *command,
				   char * const envp[])
{
  char		**arg_array;
  pid_t		pid;

  arg_array = my_str_to_wordtab_delim(command, ' ');
  pid = fork();
  if (!pid)
    execve(executable, arg_array, envp);
  else
    {
      my_putstr("Created a process (");
      my_put_nbr(pid);
      my_putstr(").\n");
    }
  return (ERROR_NONE);
}
