/*
** map_load.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 14:56:16 2010 antoine luciani
** Last update Wed May 12 17:52:14 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

#include "my.h"
#include "list.h"
#include "map.h"

void		print_map_from_tokens(t_list *list_ptr);

int		compute_map_size(t_map *map, t_list *token_list)
{
  t_list_node	*node_ptr;
  t_token	*token_ptr;
  int		width;

  node_ptr = token_list->first;
  width = 0;
  map->width = -1;
  map->height = 0;
  while (node_ptr != 0)
    {
      token_ptr = (t_token *)node_ptr->data;
      if (token_ptr->type == TOKEN_LINE_END)
	{
	  if (map->width == -1)
	    map->width = width;
	  /*
	  else if (map->width != width)
	    return (1);
	  */
	  map->height += 1;
	  width = 0;
	}
      else if (token_ptr->type == TOKEN_HEIGHT)
	width += 1;
      node_ptr = node_ptr->next;
    }
  return (0);
}

void		fill_map(t_map *map, t_list *token_list)
{
  int		i;
  t_list_node	*node_ptr;
  t_token	*token_ptr;

  map->points = xmalloc(sizeof(*(map->points)) * map->width * map->height);
  node_ptr = token_list->first;
  i = 0;
  while (node_ptr)
    {
      token_ptr = (t_token *)node_ptr->data;
      if (token_ptr->type == TOKEN_HEIGHT)
	{
	  map->points[i].height = token_ptr->value;
	  map->points[i].color = 0xffffff;
	  i += 1;
	}
      else if (token_ptr->type == TOKEN_COLOR)
	map->points[i - 1].color = token_ptr->value;
      node_ptr = node_ptr->next;
    }
}

int		get_map_height_count(t_list *token_list)
{
  int		count;
  t_list_node	*node_ptr;
  t_token	*token_ptr;

  count = 0;
  node_ptr = token_list->first;
  while (node_ptr)
    {
      token_ptr = (t_token *)node_ptr->data;
      if (token_ptr->type == TOKEN_HEIGHT)
	count += 1;
      node_ptr = node_ptr->next;
    }
  return (count);
}

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
  list_init(&token_list);
  map_tokenize_file(fd, &token_list);
  if (token_list.node_count == 0)
    return (0);
  if (compute_map_size(map, &token_list))
    {
      list_clean(&token_list);
      return (0);
    }
  fill_map(map, &token_list);
  return (map);
}
