/*
** map_tokenize_file.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 21:19:21 2010 antoine luciani
** Last update Tue May 11 23:15:53 2010 antoine luciani
*/

#include <stdlib.h>
#include <stdio.h>

#include "my.h"
#include "list.h"
#include "get_next_line.h"
#include "map.h"

/*
** Creates a new token, fills it and adds it to
** a list of token.
*/
void		create_and_add_token(t_list *list,
				     t_token_type type,
				     int value)
{
  t_token	*token;

  printf("type\t= %d\n", type);
  printf("value\t=%d\n", value);
  token = xmalloc(sizeof(*token));
  token->type = type;
  token->value = value;
  list_append_data(list, token);
}

/*
** Determines if a character belongs to a given base.
*/
static int	belong_to_base(char c, char *base)
{
  int		i;

  i = 0;
  while (base[i] != 0)
    {
      if (base[i] == c)
	return (1);
      i += 1;
    }
  return (0);
}

/*
** Returns a pointer to the first character after a
** number in a string.
*/
static char	*find_number_end(char *line, char *base)
{
  while(belong_to_base(*line, base))
    line += 1;
  return (line);
}

/*
** Analyses a map's line and creates tokens.
*/
void		tokenize_line(char *line, struct s_list *list)
{
  int		value;

  while (*line != 0)
    {
      if (*line >= '0' && *line <= '9')
	{
	  if (line[0] == '0' && line[1] == 'x')
	    {
	      my_putstr("TOKEN_COLOR\t: ");
	      my_put_nbr(TOKEN_COLOR);
	      my_putchar('\n');
	      create_and_add_token(list, TOKEN_COLOR,
				   my_getnbr_base(line + 2, HEX_BASE));
	      line = find_number_end(line, HEX_BASE);
	    }
	  else if (*line >= '0' && *line <= '9')
	    {
	      my_putstr("TOKEN_HEIGHT\t: ");
	      my_put_nbr(TOKEN_HEIGHT);
	      my_putchar('\n');
	      value = my_getnbr_base(line, DEC_BASE);
	      printf("tokenize_line : value = %d\n", value);
	      create_and_add_token(list, TOKEN_HEIGHT,
				   value);
	      line = find_number_end(line, DEC_BASE);
	    }
	}
      else
	{
	  if (*line == '\n')
	    create_and_add_token(list + 1, TOKEN_LINE_END, 0);
	  line += 1;
	}
    }
}

/*
** Analyses a map file and creates tokens.
*/
void		map_tokenize_file(int fd, t_list *token_list)
{
  char		*line;

  while ((line = get_next_line(fd)) != 0)
    {
      tokenize_line(line, token_list);
      free(line);
    }
}
