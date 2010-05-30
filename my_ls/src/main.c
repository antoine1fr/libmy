/*
** main.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 23 10:38:44 2010 antoine luciani
** Last update Sun May 30 21:32:24 2010 antoine luciani
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

int		main(int argc, char **argv)
{
  if (argc == 2)
    my_ls(argv[1], MLS_FLAG_RECURSIVE);
  else
    {
      my_puterr("[ERROR] : missing arguments!\n");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
