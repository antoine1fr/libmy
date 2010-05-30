/*
** main.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 23 10:38:44 2010 antoine luciani
** Last update Sun May 30 22:49:22 2010 antoine luciani
*/

#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "btree.h"
#include "list.h"
#include "my.h"
#include "my_ls.h"

void		handle_error(t_error error_code)
{
  if (error_code == ERROR_BAD_PATH)
    my_puterr("[ERROR] : a bad path has been given!\n");
  else if (error_code == ERROR_CLOSE_DIR)
    my_puterr("[ERROR] : a directory can't be closed.\n");
  else if (error_code == ERROR_BAD_PARAM)
    my_puterr("[ERROR] : a bad flag has been given!\n");
}

int		main(int argc, char **argv)
{
  int		begin;
  char		flags;
  t_error	error;

  if (argc < 2)
    {
      my_puterr("[ERROR] : missing arguments!\n");
      return (EXIT_FAILURE);
    }
  error = mls_parse_args(argc, argv, &flags, &begin);
  if (error == ERROR_BAD_PARAM)
    {
      handle_error(error);
      return (EXIT_FAILURE);
    }
  while (begin < argc)
    {
      if ((error = my_ls(argv[begin++], flags)) != ERROR_NONE)
	{
	  handle_error(error);
	  return (EXIT_FAILURE);
	}
    }
  return (EXIT_SUCCESS);
}
