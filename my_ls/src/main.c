/*
** main.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 23 10:38:44 2010 antoine luciani
** Last update Sun May 23 10:56:40 2010 antoine luciani
*/

#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include "my.h"

#define ERROR_NO_ERROR 0
#define ERROR_READ_DIR 1

typedef unsigned char t_error;

static void	print_error(t_error error)
{
  if (ERROR_READ_DIR)
    my_puterr("ERROR : failed to read the directory.\n");
}

t_error		list_dir_content(const char *path)
{
  DIR		*dir_ptr;
  dirent	*dirent_ptr;

  dir_ptr = readdir(path);
  if (!dir_ptr)
    return (ERROR_READ_DIR);
  while ((dirent_ptr = readdir(dir_ptr)) != 0)
    {
      my_putstr(dirent_ptr->d_name);
      my_putchar('\n');
    }
  return (ERROR_NO_ERROR);
}

int		main(int argc, char **argv)
{
  t_error	error_code;

  if (argc != 2)
    {
      my_puterr("Usage : ./my_ls path\m");
      return (EXIT_FAILURE);
    }
  error_code = list_dir_content(argv[1]);
  print_error(error_code);
  return (EXIT_SUCCESS);
}
