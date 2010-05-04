/*
** main.c for test of my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:26:58 2010 antoine luciani
** Last update Tue May  4 14:42:34 2010 antoine luciani
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

  if (mgr_init() != MGR_ERROR_NONE)
    return (EXIT_FAILURE);
  wnd_ptr = mgr_create_window("my_graphics - test", 300, 300);
  img_ptr = mgr_create_image(wnd_ptr->width, wnd_ptr->height);
  mgr_img_put_pixel(img_ptr, 300 / 2, 300 / 2, 0x00ff0000);
  while (1)
    mlx_put_image_to_window(gl_mgr_device->mlx_ptr, wnd_ptr->wnd_ptr,
			    img_ptr->mlx_ptr, 0, 0);
  free(img_ptr);
  mgr_quit();
  return (EXIT_SUCCESS);
}
