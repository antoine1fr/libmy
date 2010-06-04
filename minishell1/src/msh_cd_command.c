/*
** msh_cd_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Jun  4 15:05:17 2010 antoine luciani
** Last update Fri Jun  4 15:58:30 2010 antoine luciani
*/

#include <stdlib.h>
#include <unistd.h>

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

#define HOME_PATH_BEG "/home/"
#define HOME_PATH_END "/cu"

void		msh_cd_command(char **argv)
{
  int		size;
  const char	*home;

  size = my_get_wordtab_size(argv);
  if (size == 3)
    {
      if (chdir(argv[1]) == -1)
	{
	  my_puterr(argv[1]);
	  my_puterr(": no such file or directory.\n");
	}
    }
  else if (size == 2)
    {
      home = msh_env_get_value_from_key("HOME");
      if (home)
	chdir(home);
    }
  else
    my_puterr("cd: Too many arguments.\n");
}
