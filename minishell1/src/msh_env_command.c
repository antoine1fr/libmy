/*
** msh_env_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 18:13:01 2010 antoine luciani
** Last update Wed Jun  2 18:20:45 2010 antoine luciani
*/

#include "my_printf.h"
#include "minishell1.h"
#include "msh_environment.h"

extern t_msh_env	gl_env;

void		msh_env_command(char UNUSED **argv)
{
  int		i;

  i = 0;
  while (i < gl_env.used)
    my_printf("%s\n", gl_env.array[i++]);
}
