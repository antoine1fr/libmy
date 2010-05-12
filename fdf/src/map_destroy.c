/*
** map_destroy.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed May 12 17:53:36 2010 antoine luciani
** Last update Wed May 12 17:56:37 2010 antoine luciani
*/

#include <stdlib.h>

#include "map.h"
#include "my.h"

void		map_destroy(t_map *map_ptr)
{
  if (!map_ptr || !map_ptr->points)
    return;
  free(map_ptr->points);
  my_memset(map_ptr, 0, sizeof(*map_ptr));
}
