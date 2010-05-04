/*
** mgr_window.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:13:53 2010 antoine luciani
** Last update Tue May  4 16:37:16 2010 antoine luciani
*/

#include <stdlib.h>
#include <mlx.h>

#include "mgr_window.h"
#include "mgr_device.h"
#include "mgr_image.h"

extern t_mgr_device	*gl_mgr_device;

static t_mgr_swap_chain	*mgr_create_swap_chain(int width, int height)
{
  t_mgr_swap_chain	*sc_ptr;

  sc_ptr = malloc(sizeof(*sc_ptr));
  if (!sc_ptr)
    return (0);
  sc_ptr->back = mgr_create_image(width, height);
  sc_ptr->front = mgr_create_image(width, height);
  return (sc_ptr);
}

t_mgr_window	*mgr_create_window(char *title, int width, int height)
{
  void		*wnd_ptr;
  t_mgr_window	*mgr_wnd_ptr;

  if (!gl_mgr_device)
    return (0);
  wnd_ptr = mlx_new_window(gl_mgr_device->mlx_ptr, width, height, title);
  if (!wnd_ptr)
    return (0);
  mgr_wnd_ptr = malloc(sizeof(*mgr_wnd_ptr));
  if (!mgr_wnd_ptr)
      return (0);
  mgr_wnd_ptr->wnd_ptr = wnd_ptr;
  mgr_wnd_ptr->width = width;
  mgr_wnd_ptr->height = height;
  mgr_wnd_ptr->swap_chain = mgr_create_swap_chain(width, height);
  return (mgr_wnd_ptr);
}

void		mgr_destroy_window(t_mgr_window *wnd_ptr)
{
  if (!wnd_ptr)
    return;
  free(wnd_ptr->swap_chain->front);
  free(wnd_ptr->swap_chain->back);
  free(wnd_ptr->swap_chain);
}
