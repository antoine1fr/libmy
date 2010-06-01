/*
** main.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 12:00:53 2010 antoine luciani
** Last update Tue Jun  1 14:08:58 2010 antoine luciani
*/

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

char		*get_path_from_env(const char **env)
{
}

int		main(int argc, char **argv, char **env)
{
  int		i;

  i = 0;
  while (env[i] != 0)
    printf("%s\n", env[i++]);
  return (EXIT_SUCCESS);
}
