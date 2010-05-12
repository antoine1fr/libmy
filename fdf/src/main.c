/*
** main.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 17:31:14 2010 antoine luciani
** Last update Wed May 12 21:05:50 2010 antoine luciani
*/

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#include "map.h"
#include "list.h"
#include "my.h"
#include "matrix4f.h"
#include "vector4f.h"
#include "my_graphics.h"

#define ISOMETRIC_K1 1.0f
#define ISOMETRIC_K2 1.0f

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

int		main()
{
  t_matrix4f	mat = {
    {ISOMETRIC_K1, -ISOMETRIC_K2, 0.f, 0.f},
    {ISOMETRIC_K1 / 2.f, ISOMETRIC_K2 / 2.f, 1.f, 0.f},
    {0.f, 0.f, 0.f, 0.f},
    {0.f, 0.f, 0.f, 1.f}
  };
  t_vector4f	quad[4] = {
    {0.f, 0.f, 0.f, 1.f},
    {10.f, 0.f, 0.f, 1.f},
    {10.f, 10.f, 0.f, 1.f},
    {0.f, 10.f, 0.f, 1.f}
  };
  t_vector4f	quad_proj[4];
  int		i;
  t_mgr_window	*wnd_ptr;
  t_mgr_image	*back_buffer;

  mgr_init();
  wnd_ptr = mgr_create_window("test - proj", 400, 400);
  back_buffer = wnd_ptr->swap_chain->back;
  i = 0;
  while (i < 4)
    {
      mat4f_mult_vec4f(mat, &quad[i], &quad_proj[i]);
      i += 1;
    }
  mgr_destroy(wnd_ptr);
  mgr_quit();
  return (EXIT_SUCCESS);
}
