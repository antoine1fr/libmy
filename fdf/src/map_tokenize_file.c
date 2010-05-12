/*
** map_tokenize_file.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 21:19:21 2010 antoine luciani
** Last update Tue May 11 23:37:39 2010 antoine luciani
*/

#include <stdlib.h>

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
  char		dec_base[11];
  char		hex_base[17];

  my_strcpy(dec_base, DEC_BASE);
  my_strcpy(hex_base, HEX_BASE);
  while (*line != 0)
    {
      if (*line >= '0' && *line <= '9')
	{
	  if (line[0] == '0' && line[1] == 'X')
	    {
	      create_and_add_token(list, TOKEN_COLOR,
				   my_getnbr_base(line + 2, hex_base));
	      line = find_number_end(line + 2, hex_base);
	    }
	  else if (*line >= '0' && *line <= '9')
	    {
	      create_and_add_token(list, TOKEN_HEIGHT,
				   my_getnbr_base(line, dec_base));
	      line = find_number_end(line, dec_base);
	    }
	}
      else
	  line += 1;
    }
}

/*
** Analyses a map file and creates tokens.
*/
void		map_tokenize_file(int fd, t_list *token_list)
{
  char		*line;
  t_list_node	*node_ptr;

  while ((line = get_next_line(fd)) != 0)
    {
      my_str_to_upper(line);
      tokenize_line(line, token_list);
      free(line);
      create_and_add_token(token_list, TOKEN_LINE_END, 0);
    }
  if (token_list->node_count > 0)
    {
      node_ptr = list_pop_element(token_list);
      free(node_ptr->data);
      free(node_ptr);
    }
}
