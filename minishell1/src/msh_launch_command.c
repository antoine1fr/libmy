/*
** msh_launch_command.c for minishell in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 17:38:33 2010 antoine luciani
** Last update Wed Jun  2 12:20:03 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include "my.h"
#include "my_printf.h"
#include "minishell1.h"

t_error		msh_launch_command(const char *command,
				   char * const envp[])
{
  char		**arg_array;
  pid_t		pid;
  char		*executable;
  char		*path;
  int		status;

  arg_array = my_str_to_wordtab_delim(command, ' ');
  path = msh_get_command_path(arg_array[0], envp);
  if (!path)
    {
      my_free_to_wordtab(arg_array);
      return (ERROR_COMMAND_NOT_FOUND);
    }
  executable = msh_construct_full_path(arg_array[0], path);
  pid = fork();
  if (!pid)
    execve(executable, arg_array, envp);
  else
    {
      my_printf("Created a process (%d)\t-> waiting...\n", pid);
      wait(&status);
    }
  return (ERROR_NONE);
}
