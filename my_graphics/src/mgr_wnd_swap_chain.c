/*
** mgr_wnd_swap_chain.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May  4 16:12:55 2010 antoine luciani
** Last update Tue May  4 17:12:43 2010 antoine luciani
*/

#include <mlx.h>
#include "mgr_device.h"
#include "mgr_window.h"
#include "mgr_image.h"

extern t_mgr_device	*gl_mgr_device;

t_mgr_image		*mgr_wnd_swap_chain(t_mgr_window *wnd_ptr)
{
  t_mgr_image		*ptr_tmp;

  if (gl_mgr_device->render_flags & MGR_RENDER_DOUBLEBUF)
    {
      ptr_tmp = wnd_ptr->swap_chain->back;
      wnd_ptr->swap_chain->back = wnd_ptr->swap_chain->front;
      wnd_ptr->swap_chain->front = ptr_tmp;
      mlx_put_image_to_window(gl_mgr_device->mlx_ptr, wnd_ptr->wnd_ptr,
			      wnd_ptr->swap_chain->front->mlx_ptr,
			      0, 0);
    }
  else
    mlx_put_image_to_window(gl_mgr_device->mlx_ptr, wnd_ptr->wnd_ptr,
			    wnd_ptr->swap_chain->back->mlx_ptr,
			    0, 0);
  return (ptr_tmp);
}
