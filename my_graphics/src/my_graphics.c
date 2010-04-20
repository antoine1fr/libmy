/*
** mgr.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:01:06 2010 antoine luciani
** Last update Tue Apr 20 15:09:07 2010 antoine luciani
*/

#include "my_graphics.h"

t_mgr_device	*gl_mgr_device;

t_mgr_error	mgr_init()
{
  gl_mgr_device = mgr_create_device();
  if (!gl_mgr_device)
    return (MGR_ERROR_DEVICE);
  return (MGR_ERROR_NONE);
}

void		mgr_quit()
{
  mgr_destroy(gl_mgr_device);
  gl_mgr_device = 0;
}
