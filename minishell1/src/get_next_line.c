/*
** get_next_line.c for get_next_line in /u/all/lucian_b/cu/work/projects/get_next_line
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May  9 01:05:57 2010 antoine luciani
** Last update Fri Jun  4 12:47:26 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include "my.h"
#include "get_next_line.h"

void		gnl_strncat(char **str1, char *str2, int n)
{
  int		len_str2;
  int		len_final;
  int		len_str1;
  char		*str_tmp;

  len_str2 = my_strlen(str2);
  len_str2 = (n < len_str2) ? n : len_str2;
  if (*str1 == 0)
      len_str1 = 0;
  else
      len_str1 = my_strlen(*str1);
  len_final = len_str1 + len_str2 + 1;
  str_tmp = *str1;
  *str1 = xmalloc(len_final * sizeof(**str1));
  if (*str1 == 0)
    return;
  if (len_str1 > 0)
    my_strncpy(*str1, str_tmp, len_str1);
  my_strncpy(*str1 + len_str1, str2, len_str2);
  (*str1)[len_final - 1] = 0;
  if (str_tmp)
    free(str_tmp);
}

static int	gnl_process_buffer(char **buffer, char **line)
{
  char		*tmp;
  int		i;
  int		len;

  if (!(*buffer))
    return (0);
  i = 0;
  while ((*buffer)[i] != 0 && (*buffer)[i] != '\n')
    i += 1;
  if ((*buffer)[i] == '\n')
    {
      len = my_strlen(&((*buffer)[i + 1])) + 1;
      tmp = xmalloc(sizeof(*tmp) * len);
      my_strncpy(tmp, &((*buffer)[i + 1]), len);
      tmp[len - 1] = 0;
      gnl_strncat(line, *buffer, i);
      free(*buffer);
      *buffer = tmp;
      return (1);
    }
  gnl_strncat(line, *buffer, i);
  free(*buffer);
  *buffer = 0;
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	*buffer = 0;
  char		read_buf[BUFFER_SIZE];
  char		*line;
  static int	count = -2;

  if (fd == -1)
    return (0);
  line = 0;
  while(!gnl_process_buffer(&buffer, &line) && count != 0 && count != -1)
    {
      count = read(fd, read_buf, BUFFER_SIZE);
      if (count > 0)
	gnl_strncat(&buffer, read_buf, count);
    }
  return (line);
}
