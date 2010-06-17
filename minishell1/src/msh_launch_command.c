/*
** msh_launch_command.c for minishell in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 17:38:33 2010 antoine luciani
** Last update Thu Jun 17 14:16:00 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

static t_error		msh_exec(const char *executable, char **arg_arr,
				 char * const envp[])
{
  pid_t			pid;
  int			status;

  pid = fork();
  if (!pid)
    {
      execve(executable, arg_arr, envp);
      exit(EXIT_FAILURE);
    }
  wait(&status);
  if (WIFEXITED(status) &&
      (WEXITSTATUS(status) == EXIT_FAILURE))
    return (ERROR_COMMAND_NOT_FOUND);
  return (ERROR_NONE);
}

t_error		msh_launch_command(char **arg_array,
				   char * const envp[])
{
  char		*executable;
  const char	*path;
  t_error	error;

  if (!arg_array)
    return (ERROR_BAD_PARAM);
  error = msh_launch_builtin(arg_array);
  if (error == ERROR_NOT_A_BUILTIN)
    {
      error = msh_exec(arg_array[0], arg_array, envp);
      if (error != ERROR_COMMAND_NOT_FOUND)
	return (error);
      path = msh_get_command_path(arg_array[0], envp);
      if (!path)
	  return (ERROR_COMMAND_NOT_FOUND);
      executable = msh_construct_full_path(arg_array[0], path);
      error = msh_exec(executable, arg_array, envp);
      free(executable);
    }
  return (error);
}
