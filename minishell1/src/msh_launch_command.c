/*
** msh_launch_command.c for minishell in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 17:38:33 2010 antoine luciani
** Last update Thu Jun  3 10:35:21 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

#include "my.h"
#include "minishell1.h"

static t_msh_bool	msh_exec(const char *executable, char **arg_arr,
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
    return (MSH_FALSE);
  return (MSH_TRUE);
}

t_error		msh_launch_command(const char *command,
				   char * const envp[])
{
  char		**arg_array;
  char		*executable;
  const char	*path;

  arg_array = my_str_to_wordtab_delim(command, ' ');
  if (!msh_launch_builtin(arg_array))
    {
      if (msh_exec(arg_array[0], arg_array, envp) == MSH_TRUE)
	return (ERROR_NONE);
      path = msh_get_command_path(arg_array[0], envp);
      if (!path)
	{
	  my_free_to_wordtab(arg_array);
	  return (ERROR_COMMAND_NOT_FOUND);
	}
      executable = msh_construct_full_path(arg_array[0], path);
      msh_exec(executable, arg_array, envp);
      free(executable);
    }
  my_free_to_wordtab(arg_array);
  return (ERROR_NONE);
}
