/*
** main.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 17:31:14 2010 antoine luciani
** Last update Wed May 12 00:58:47 2010 antoine luciani
*/

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#include "map.h"
#include "list.h"
#include "my.h"

static void	print_token_info(t_token *token_ptr)
{
  if (!token_ptr)
    return;
  my_putstr("type\t: ");
  my_put_nbr(token_ptr->type);
  my_putstr("\nvalue\t: ");
  my_put_nbr(token_ptr->value);
  my_putchar('\n');
}

static int	test_tokenize_file(const char *file_name)
{
  t_list	list;
  int		file_desc;

  file_desc = open(file_name, O_RDONLY);
  if (file_desc == -1)
    return (1);
  list_init(&list);
  map_tokenize_file(file_desc, &list);
  printf("list's size : %d\n", list.node_count);
  list_print_data(&list, print_token_info);
  list_clean(&list);
  return (0);
}

void		print_map_from_tokens(t_list *list_ptr)
{
  t_list_node	*node_ptr;
  t_token	*token_ptr;

  node_ptr = list_ptr->first;
  while (node_ptr != 0)
    {
      token_ptr = (t_token *)node_ptr->data;
      if (token_ptr->type == TOKEN_HEIGHT)
	  printf("%d ", token_ptr->value);
      else if(token_ptr->type == TOKEN_COLOR)
	  printf(", 0x%x ", token_ptr->value);
      else
	printf("\n");
      node_ptr = node_ptr->next;
    }
}

void		print_map(t_map *map_ptr)
{
  int		i;
  int		point_count;

  point_count = map_ptr->width * map_ptr->height;
  i = 0;
  while (i < point_count)
    {
      printf("%d,0x%x ",
	     map_ptr->points[i].height, map_ptr->points[i].color);
      i += 1;
      if (i % map_ptr->width == 0)
	printf("\n");
    }
}

int		main(int argc, char **argv)
{
  t_map		*map;

  if (argc != 2)
    {
      my_putstr("ERROR : missing the map's file name!\n");
      return (EXIT_FAILURE);
    }
  if ((map = map_load(argv[1])) == 0)
    {
      my_putstr("ERROR : could not load the map!\n");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
