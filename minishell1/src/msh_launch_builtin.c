/*
** msh_launch_builtin.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 12:40:06 2010 antoine luciani
** Last update Wed Jun  2 18:17:20 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

t_builtin	g_builtin_arr[] = {
  {"exit", msh_exit_command},
  {"testenv_getvarindex", msh_testenv_getvarindex},
  {"env", msh_env_command},
  {0, 0}
};

t_msh_bool	msh_launch_builtin(char **arg_array)
{
  int		i;

  if (arg_array && arg_array[0])
    {
      i = 0;
      while (g_builtin_arr[i].name != 0)
	{
	  if (my_strcmp(arg_array[0], g_builtin_arr[i].name) == 0)
	    {
	      g_builtin_arr[i].exec(arg_array);
	      return (MSH_TRUE);
	    }
	  i += 1;
	}
    }
  return (MSH_FALSE);
}
