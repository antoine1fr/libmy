/*
** mgr_image.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:59:43 2010 antoine luciani
** Last update Tue May  4 15:10:16 2010 antoine luciani
*/

#ifndef _MGR_IMAGE_H_
# define _MGR_IMAGE_H_

typedef struct	s_mgr_rect
{
  unsigned int	x;
  unsigned int	y;
  unsigned int	width;
  unsigned int	height;
}		t_mgr_rect;

typedef struct	s_mgr_image
{
  void		*mlx_ptr;
  char		*buffer;
  int		width;
  int		height;
  int		bpp;
  int		endian;
  int		line_size;
}		t_mgr_image;

/*
** Creates a new image.
**
** @param width : width of the image in pixels.
** @param height : width of the image in pixels.
**
** @return the address of the new image or 0, if the
** creation failed.
*/
t_mgr_image	*mgr_create_image(int width, int height);

/*
** Puts a pixel on an image.
**
** @param img_ptr : pointer to the t_mgr_ptr in wich the pixel
** will be drawn.
** @param x : abscissa of the pixel.
** @param y : ordinate of the pixel.
** @param color : color of the pixel.
*/
void		mgr_img_put_pixel(t_mgr_image *img_ptr, int x, int y, int color);

/*
** Fill a region of an image with a color.
*/
void		mgr_img_fill(t_mgr_image *img_ptr, t_mgr_rect *rect_ptr, int color);

#endif /* !_MGR_IMAGE_H_ */
