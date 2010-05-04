/*
** mgr_img_fill.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May  4 15:08:27 2010 antoine luciani
** Last update Tue May  4 15:17:49 2010 antoine luciani
*/

#include "mgr_image.h"

void		mgr_img_fill(t_mgr_image *img_ptr, t_mgr_rect *rect_ptr, int color)
{
  int		x;
  int		y;

  if (!img_ptr || !rect_ptr)
    return;
  y = rect_ptr->y;
  while ((y < rect_ptr->height) && (y < img_ptr->height))
    {
      x = rect_ptr->x;
      while ((x < rect_ptr->width) && (x < img_ptr->width))
	mgr_img_put_pixel(img_ptr, x++, y, color);
      y += 1;
    }
}
