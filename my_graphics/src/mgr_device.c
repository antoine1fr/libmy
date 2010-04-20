/*
** mgr_device.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:27:09 2010 antoine luciani
** Last update Tue Apr 20 14:41:26 2010 antoine luciani
*/

#include "mgr_device.h"
#include <mlx.h>
#include <stdlib.h>

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
  return (device);
}
