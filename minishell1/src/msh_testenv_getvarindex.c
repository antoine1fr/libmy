/*
** msh_testenv_getvarindex.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 16:37:56 2010 antoine luciani
** Last update Wed Jun  2 16:56:59 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"
#include "my_printf.h"

void		msh_testenv_getvarindex(char **argv)
{
  t_msh_env	env;
  int		i;
  int		arg_count;

  arg_count = my_get_wordtab_size(argv);
  my_printf("arg_count : %d\n", arg_count);
  if (arg_count == 3)
    {
      msh_env_init(&env, 3);
      env.array[0] = "KEY1=VAR1";
      env.array[1] = "KEY2=VAR2";
      env.array[2] = "PATH=/usr/bin";
      env.used = 3;
      i = msh_env_get_var_index(argv[1], &env);
      if (i >= 0)
	my_printf("%s\n", env.array[i]);
      else
	{
	  my_puterr("[ERROR] : ");
	  my_puterr(argv[1]);
	  my_puterr(" isn't defined!\n");
	}
    }
  else
    my_puterr("[ERROR] : expected a variable name!\n");
}
