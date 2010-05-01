/*
** mgr_create_image.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 16:08:52 2010 antoine luciani
** Last update Wed Apr 21 13:46:55 2010 antoine luciani
*/

#include "mgr_image.h"
#include "mgr_device.h"

#include <stdlib.h>
#include <mlx.h>

extern t_mgr_device	*gl_mgr_device;

t_mgr_image		*mgr_create_image(int width, int height)
{
  t_mgr_image		*img_ptr;
  void			*mlx_img_ptr;

  if(!gl_mgr_device)
    return (0);
  mlx_img_ptr = mlx_new_image(gl_mgr_device->mlx_ptr, width, height);
  if (!mlx_img_ptr)
    return (0);
  img_ptr = malloc(sizeof(*img_ptr));
  if (!img_ptr)
    return (0);
  img_ptr->mlx_ptr = mlx_img_ptr;
  img_ptr->buffer = mlx_get_data_addr(mlx_img_ptr,
				      &img_ptr->bpp,
				      &img_ptr->line_size,
				      &img_ptr->endian);
  return (img_ptr);
}
