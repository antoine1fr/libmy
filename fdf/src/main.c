/*
** main.c for fdf in /u/all/lucian_b/cu/work/projects/fdf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May 11 17:31:14 2010 antoine luciani
** Last update Wed May 12 23:48:01 2010 antoine luciani
*/

#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

#include <math.h>

#include "map.h"
#include "list.h"
#include "my.h"
#include "matrix4f.h"
#include "vector4f.h"
#include "my_graphics.h"

#define WND_WIDTH 400
#define WND_HEIGHT 400
#define K1 0.75f
#define K2 0.75f

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

/*
void	draw_circle(t_mgr_image *img)
{
  t_mgr_vec2i	centre;
  t_mgr_vec2i	radius;
  int		i;

  i = 0;
  centre.x = 0;
  centre.y = 0;
  while (i < 360)
    {
      radius.x = cos(i * 3.14157 / 180) * 50;
      radius.y = sin(i * 3.14157 / 180) * 50;
      mgr_draw_line(&centre, &radius, img, 0xffffffff);
      i += 1;
    }
}
*/

int		main()
{
  /*
    t_matrix4f	mat = {
    {1.f, 0.f, 0.f, WND_WIDTH / 2.f},
    {0.f, 1.f, 0.f, WND_HEIGHT / 2.f},
    {0.f, 0.f, 1.f, 0.f},
    {0.f, 0.f, 0.f, 1.f}
    };
  */
  t_matrix4f	mat = {
    {K1, -K2, 0.f, 0.f},
    {K1 / 2.f, K2 / 2.f, 1.f, 0.f},
    {0.f, 0.f, 0.f, 0.f},
    {0.f, 0.f, 0.f, 1.f}
  };
  /*
    t_matrix4f	mat = {
    {1.f, 0.f, 1.f, WND_WIDTH / 2.f},
    {0.f, 1.f, 0.5f, WND_HEIGHT / 2.f},
    {0.f, 0.f, 0.f, 0.f},
    {0.f, 0.f, 0.f, 1.f}
    };
  */
  t_vector4f	quad[4] = {
    {0.f, 0.f, 100.f, 1.f},
    {100.f, 0.f, 100.f, 1.f},
    {100.f, 100.f, 100.f, 1.f},
    {0.f, 100.f, 0.f, 1.f}
  };
  t_vector4f	quad_proj[4];
  int		i;
  t_mgr_window	*wnd_ptr;
  t_mgr_image	*back_buffer;
  t_mgr_vec2i	beg;
  t_mgr_vec2i	end;

  mgr_init();
  wnd_ptr = mgr_create_window("test - proj", 400, 400);
  back_buffer = wnd_ptr->swap_chain->back;
  i = 0;
  while (i < 4)
    {
      /*
	mat4f_mult_vec4f(mat, &quad[i], &quad_proj[i]);
      */
      quad_proj[i].x = K1 * quad[i].x - K2 * quad[i].y;
      quad_proj[i].y = quad[i].z + K1 * quad[i].x / 2.f + K2 * quad[i].y / 2.f;
      quad_proj[i].z = 0;
      quad_proj[i].w = 1;
      i += 1;
    }
  /*
    beg.x = quad_proj[0].x;
    beg.y = quad_proj[0].y;
    end.x = quad_proj[1].x;
    end.y = quad_proj[1].y;
    mgr_draw_line(&beg, &end, back_buffer, 0xffffffff);
    beg.x = quad_proj[2].x;
    beg.y = quad_proj[2].y;
    end.x = quad_proj[1].x;
    end.y = quad_proj[1].y;
    mgr_draw_line(&beg, &end, back_buffer, 0xffffffff);
  */
  beg.x = quad_proj[2].x;
  beg.y = quad_proj[2].y;
  end.x = quad_proj[3].x;
  end.y = quad_proj[3].y;
  mgr_draw_line(&beg, &end, back_buffer, 0xffffffff);
  /*
    beg.x = quad_proj[3].x;
    beg.y = quad_proj[3].y;
    end.x = quad_proj[0].x;
    end.y = quad_proj[0].y;
    mgr_draw_line(&beg, &end, back_buffer, 0xffffffff);
  */
  while (1)
    mgr_wnd_swap_chain(wnd_ptr);
  mgr_destroy_window(wnd_ptr);
  mgr_quit();
  return (EXIT_SUCCESS);
}
