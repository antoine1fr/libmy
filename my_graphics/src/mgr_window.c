/*
** mgr_window.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:13:53 2010 antoine luciani
** Last update Tue Apr 20 15:54:22 2010 antoine luciani
*/

#include "mgr_window.h"
#include "mgr_device.h"

#include <stdlib.h>
#include <mlx.h>

extern t_mgr_device	*gl_mgr_device;

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
  return (mgr_wnd_ptr);
}
