/*
** mgr_draw_line.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu May  6 11:40:44 2010 antoine luciani
** Last update Fri May  7 10:23:27 2010 antoine luciani
*/

#include "mgr_primitive.h"
#include "mgr_image.h"
#include "mgr_vec2i.h"
#include "mgr_image.h"

/*
** Draws a line from top-left to bottom-right (x > y).
*/
static void	mgr_draw_line1(struct s_mgr_vec2i *beg,
			       struct s_mgr_vec2i *end,
			       struct s_mgr_image *img,
			       int color)
{
  int		x;
  int		y;
  t_mgr_vec2i	v1;
  t_mgr_vec2i	v2;

  if (!beg || !end || !img)
    return;
  if (beg->x > end->x)
    {
      mgr_vec2i_copy(beg, &v2);
      mgr_vec2i_copy(end, &v1);
    }
  else
    {
      mgr_vec2i_copy(beg, &v1);
      mgr_vec2i_copy(end, &v2);
    }
  x = v1.x;
  while (x < v2.x && x < img->width)
    {
      y = x * (v2.y - v1.y) / (v2.x - v1.x) + v1.y;
      mgr_img_put_pixel(img, x, y, color);
      x += 1;
    }
}

void		mgr_draw_line(struct s_mgr_vec2i *beg,
			      struct s_mgr_vec2i *end,
			      struct s_mgr_image *img,
			      int color)
{
  int		diff_x;
  int		diff_y;

  diff_x = end->x - beg->x;
  diff_y = end->y - beg->y;
  diff_x = (diff_x < 0) ? -diff_x : diff_x;
  diff_y = (diff_y < 0) ? -diff_y : diff_y;
  if (diff_y < diff_x)
    mgr_draw_line1(beg, end, img, color);
}
