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
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include "my.h"

#define ERROR_NO_ERROR 0
#define ERROR_READ_DIR 1

#define MY_FALSE 0
#define MY_TRUE 1

typedef char	t_error;
typedef char	t_bool;

void	print_error(t_error error)
{
  if (error == ERROR_READ_DIR)
    my_puterr("ERROR : failed to read the directory.\n");
}

t_error		list_dir_content(const char *path, t_bool print_hidden)
{
  DIR		*dir_ptr;
  struct dirent	*dirent_ptr;

  dir_ptr = opendir(path);
  if (!dir_ptr)
    return (ERROR_READ_DIR);
  while ((dirent_ptr = readdir(dir_ptr)) != 0)
    {
      if (dirent_ptr->d_name[0] != '.' || print_hidden == MY_TRUE)
	{
	  my_putstr(dirent_ptr->d_name);
	  my_putchar('\n');
	}
    }
  closedir(dir_ptr);
  return (ERROR_NO_ERROR);
}

void		test_stat(const char *path)
{
  struct stat	buf;

  stat(path, &buf);
  my_put_nbr(buf.st_mtime);
  my_putchar('\n');
}

int		main(int argc, char **argv)
{
  if (argc != 2)
    {
      my_puterr("Usage : ./my_ls path\n");
      return (EXIT_FAILURE);
    }
  test_stat(argv[1]);
  return (EXIT_SUCCESS);
}
