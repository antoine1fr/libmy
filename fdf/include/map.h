/*
** map.h for fdf in /u/all/lucian_b/cu/work/projets/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat Apr 17 14:01:45 2010 antoine luciani
** Last update Sat Apr 17 14:10:49 2010 antoine luciani
*/

#ifndef MAP_H
# define MAP_H

typedef struct	s_map_point
{
  int		height;
  int		color;
}		t_map_point;

typedef struct	s_map
{
  t_map_point	*points;
  int		width;
  int		height;
}		t_map;

t_map	*map_load(char *filename);

#endif /* MAP_H */
