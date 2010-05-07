/*
** fdf_get_next_line.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri May  7 19:45:19 2010 antoine luciani
** Last update Fri May  7 20:43:08 2010 antoine luciani
*/

#include "my.h"

#define FDF_BUF_MAX_SIZE 10

static int	fdf_find_nl_char(char *str, int count)
{
  int		i;

  if (!count)
    return (-1);
  i = 0;
  while (i < count && str[i] != '\n')
    i += 1;
}

static void	fdf_add_remaining_char(char **line_ptr, char **chars_ptr)
{
  char		*new_line;
  int		new_line_size;

  new_line_size = my_strlen(*line_ptr) + my_strlen(*chars_ptr);
  new_line = xmalloc(new_line_size);
}

char		*fdf_get_next_line(int fd)
{
  char		buffer[FDF_BUF_MAX_SIZE];
  char		*line;
  int		line_size;
  int		count;
  static char	*remaining_char = 0;

  line_size = 0;
  while (count = read(fd, buffer, FDF_BUF_MAX_SIZE))
    {
      fdf_add_remaining_char(&line, &remaining_char);
      count = fdf_find_nl_char(buffer, count);
      line = fdf_resize_line(line, count);
      my_strncpy(line, buffer, count);
      line_size += count;
    }
}
