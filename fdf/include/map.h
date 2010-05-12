/*
** map.h for fdf in /u/all/lucian_b/cu/work/projets/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat Apr 17 14:01:45 2010 antoine luciani
** Last update Wed May 12 17:53:27 2010 antoine luciani
*/

#ifndef MAP_H
# define MAP_H

#define DEC_BASE "0123456789"
#define HEX_BASE "0123456789ABCDEF"

struct s_list;

typedef enum	e_token_type
  {
    TOKEN_HEIGHT = 0,
    TOKEN_LINE_END,
    TOKEN_COLOR
  }		t_token_type;

typedef struct		s_token
  {
    t_token_type	type;
    int			value;
  }			t_token;

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

t_map	*map_load(const char *file_name);
void	map_tokenize_file(int fd, struct s_list *list);
void	map_destroy(t_map *map_ptr);

#endif /* MAP_H */
