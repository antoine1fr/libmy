/*
** mgr_img_put_pixel.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 22 16:57:04 2010 antoine luciani
** Last update Fri Apr 23 18:24:17 2010 antoine luciani
*/

#include <mlx.h>

#include "mgr_image.h"
#include "mgr_device.h"

extern t_mgr_device	*gl_mgr_device;

static void	mgr_map_24bits_color(char *pixels, unsigned int color, int endian)
{
  if (endian == 0)
    {
      pixels[0] = (color >> 16) & 0xff;
      pixels[1] = (color >> 8) & 0xff;
      pixels[2] = color & 0xff;
    }
  else
    {
      pixels[2] = (color >> 16) & 0xff;
      pixels[1] = (color >> 8) & 0xff;
      pixels[0] = color & 0xff;
    }
}

void		mgr_img_put_pixel(t_mgr_image *img_ptr, int x, int y, int color)
{
  char		*ptr;
  int		bytes;
  unsigned int	final_color;

  if (!img_ptr)
    return;
  bytes = img_ptr->bpp / 8;
  ptr = img_ptr->buffer + x * bytes + y * img_ptr->line_size;
  final_color = mlx_get_color_value(gl_mgr_device, color);
  if (bytes == 1)
    *ptr = final_color;
  else if (bytes == 2)
    *(unsigned short *)ptr = final_color;
  else if (bytes == 3)
    mgr_map_24bits_color(ptr, final_color, img_ptr->endian);
  else if (bytes == 4)
    *(unsigned int *)ptr = final_color;
}
