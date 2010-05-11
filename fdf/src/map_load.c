/*
** map_load.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 14:56:16 2010 antoine luciani
** Last update Tue May 11 21:40:34 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

#include "my.h"
#include "list.h"
#include "map.h"

/*
** Loads a map from a file.
*/
t_map		*map_load(const char *file_name)
{
  int		fd;
  t_map		*map;
  t_list	token_list;

  fd = open(file_name, O_RDONLY);
  if (fd == -1)
    return (0);
  map = xmalloc(sizeof(*map));
  my_memset(map, 0, sizeof(*map));
  map_tokenize_file(fd, &token_list);
  return (map);
}
