/*
** mgr_img_fill.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue May  4 15:08:27 2010 antoine luciani
** Last update Thu May  6 12:55:54 2010 antoine luciani
*/

#include <stdio.h>
#include "mgr_image.h"

void		mgr_img_fill(t_mgr_image *img_ptr, t_mgr_rect *rect_ptr, int color)
{
  unsigned int	x;
  unsigned int	y;
  unsigned int	y_end;
  unsigned int	x_end;

  if (!img_ptr || !rect_ptr)
    return;
  y = rect_ptr->y;
  x_end = rect_ptr->x + rect_ptr->width;
  y_end = rect_ptr->y + rect_ptr->height;
  while ((y < y_end) && (y < img_ptr->height))
    {
      x = rect_ptr->x;
      while ((x < x_end) && (x < img_ptr->width))
	  mgr_img_put_pixel(img_ptr, x++, y, color);
      y += 1;
    }
}
