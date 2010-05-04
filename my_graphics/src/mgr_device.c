/*
** mgr_device.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:27:09 2010 antoine luciani
** Last update Tue May  4 17:14:38 2010 antoine luciani
*/

#include "mgr_device.h"
#include <mlx.h>
#include <stdlib.h>

/*
** Creates a my_graphics device.
**
** @return a pointer to the device.
*/
t_mgr_device	*mgr_create_device()
{
  t_mgr_device	*device;

  device = malloc(sizeof(*device));
  if (!device)
    return (0);
  device->mlx_ptr = mlx_init();
  if (!device->mlx_ptr)
    {
      free(device->mlx_ptr);
      return (0);
    }
  device->render_flags = 0;
  return (device);
}

/*
** Free the my_graphics device and all its stuff.
** Don't forget to re-affect your t_mgr_device* to NULL.
**
** @param device : pointer to the my_graphics device.
*/
void		mgr_destroy(t_mgr_device *device)
{
  if (!device)
    return;
  free (device);
}
