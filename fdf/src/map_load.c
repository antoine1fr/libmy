/*
** map_load.c for fdf in /u/all/lucian_b/cu/work/projets/fdf
** 
n** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat Apr 17 14:10:05 2010 antoine luciani
** Last update Fri May  7 20:43:13 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include "my.h"
#include "map.h"

#define DEC_BASE "012345679"
#define HEX_BASE "0123456789ABCDEF"

static void	get_map_stats(int file_desc, t_map *map)
{
  char		c;
  int		in_word;
  int		count_col;

  count_col = 1;
  map->height = 1;
  map->width = 0;
  in_word = 0;
  lseek(file_desc, 0, SEEK_SET);
  while (read(file_desc, &c, 1))
    {
      if (c == '\n')
	{
	  count_col = 0;
	  map->height += 1;
	}
      else if (!in_word && c != ' ' && count_col)
	{
	  in_word = 1;
	  map->width += 1;
	}
      else if (in_word && c == ' ')
	in_word = 0;
    }
}

static void	get_file_line(int file_desc, char *buffer)
{
  int		i;
  char		c;

  i = 0;
  c = 0;
  while (c != '\n')
    {
      read(file_desc, &c, 1);
      buffer[i++] = c;
    }
}

static int	extract_number(char *str)
{
  int		hex;
  int		len;
  char		*str_num;
  int		num;

  hex = 0;
  len = 0;
  if (str[1] == 'x')
    {
      str += 2;
      hex = 1;
    }
  while (*str >= '0' && *str <= '9')
    len += 1;
  str_num = xmalloc(len * sizeof(*str_num));
  my_strncpy(str_num, str, len);
  if (hex)
    num = my_getnbr_base(str_num, HEX_BASE);
  else
    num = my_getnbr_base(str_num, DEC_BASE);
  free(str_num);
  return (num);
}

static void	fill_map(int file_desc, t_map *map)
{
  char		*buffer;
  int		point_count;
  int		begin;


  point->count = map->width * map->height;
  buffer = xmalloc(point_count * sizeof(*buffer));
}

t_map		*map_load(char *file_name)
{
  t_map		*map;
  int		fd;
  int		point_count;

  fd = open(file_name, O_RDONLY);
  if (fd == -1)
    return (0);
  map = xmalloc(sizeof(*map));
  get_map_stats(fd, map);
  point_count = map->width * map->height;
}
