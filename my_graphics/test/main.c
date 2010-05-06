/*
** main.c for test of my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:26:58 2010 antoine luciani
** Last update Thu May  6 12:55:26 2010 antoine luciani
*/

#include <stdlib.h>
#include <mlx.h>
#include <string.h>
#include "my_graphics.h"

extern t_mgr_device	*gl_mgr_device;

int		main(int argc, char **argv)
{
  t_mgr_window	*wnd_ptr;
  t_mgr_image	*img_ptr;
  t_mgr_rect	rect;

  if (mgr_init() != MGR_ERROR_NONE)
    return (EXIT_FAILURE);
  wnd_ptr = mgr_create_window("my_graphics - test", 300, 300);
  img_ptr = wnd_ptr->swap_chain->back;
  rect.x = 250;
  rect.y = 250;
  rect.width = 100;
  rect.height = 200;
  mgr_img_fill(img_ptr, &rect, 0x00ff00ff);
  while (1)
      img_ptr = mgr_wnd_swap_chain(wnd_ptr);
  mgr_destroy_window(wnd_ptr);
  mgr_quit();
  return (EXIT_SUCCESS);
}
