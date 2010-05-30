/*
** mls_parse_args.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 30 21:47:18 2010 antoine luciani
** Last update Sun May 30 22:47:44 2010 antoine luciani
*/

#include <dirent.h>

#include "btree.h"
#include "list.h"
#include "my.h"
#include "my_ls.h"

static char	mls_get_right_flag(char c)
{
  if (c == 'l')
    return (MLS_FLAG_DETAILS);
  else if (c == 'R')
    return (MLS_FLAG_RECURSIVE);
  else if (c == 'a')
    return (MLS_FLAG_HIDDEN);
  else if (c == 'r')
    return (MLS_FLAG_DESC);
  else if (c == 't')
    return (MLS_FLAG_BY_TIME);
  else
    return (MLS_FLAG_UNKNOWN);
}

t_error		mls_parse_args(int argc, char **argv,
			       char *flags, int *path_begin)
{
  int		i;
  char		flag;

  *path_begin = 1;
  *flags = 0;
  while (*path_begin < argc && argv[*path_begin][0] == '-')
    {
      i = 1;
      while (argv[*path_begin][i] != 0)
	{
	  flag = mls_get_right_flag(argv[*path_begin][i]);
	  if (flag == MLS_FLAG_UNKNOWN)
	    return (ERROR_BAD_PARAM);
	  *flags |= flag;
	  i += 1;
	}
      *path_begin += 1;
    }
  return (ERROR_NONE);
}
