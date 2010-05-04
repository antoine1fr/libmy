/*
** main.c for test of my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:26:58 2010 antoine luciani
** Last update Tue May  4 15:20:53 2010 antoine luciani
*/

#include "my_graphics.h"
#include <stdlib.h>
#include <mlx.h>
#include <string.h>

extern t_mgr_device	*gl_mgr_device;

int		main(int argc, char **argv)
{
  t_mgr_window	*wnd_ptr;
  t_mgr_image	*img_ptr;
  t_mgr_rect	rect;

  if (mgr_init() != MGR_ERROR_NONE)
    return (EXIT_FAILURE);
  wnd_ptr = mgr_create_window("my_graphics - test", 300, 300);
  img_ptr = mgr_create_image(wnd_ptr->width, wnd_ptr->height);
  rect.x = 0;
  rect.y = 0;
  rect.width = 300;
  rect.height = 300;
  mgr_img_fill(img_ptr, &rect, 0x0000ff00);
  while (1)
    mlx_put_image_to_window(gl_mgr_device->mlx_ptr, wnd_ptr->wnd_ptr,
			    img_ptr->mlx_ptr, 0, 0);
  free(img_ptr);
  mgr_quit();
  return (EXIT_SUCCESS);
}
