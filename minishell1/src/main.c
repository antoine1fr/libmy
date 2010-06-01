/*
** main.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 12:00:53 2010 antoine luciani
** Last update Tue Jun  1 15:41:27 2010 antoine luciani
*/

#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "my.h"

#define UNUSED __attribute__((unused))

const char	*get_path_from_env(const char **env)
{
  int		size;
  int		i;

  i = 0;
  while (env[i])
    {
      size = my_strlen(env[i]);
      if (size >= 6 && my_strncmp(env[i], "PATH=", 5) == 0)
	return (env[i]);
      i += 1;
    }
  return (0);
}

int		main(int UNUSED argc, const char UNUSED **argv, const char **env)
{
  const char	*path;
  char		**path_array;

  path = get_path_from_env(env);
  if (path)
    {
      path_array = my_str_to_wordtab_delim(path + 5, ':');
    }
  my_putchar('\n');
  return (EXIT_SUCCESS);
}
