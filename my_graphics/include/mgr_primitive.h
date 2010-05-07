/*
** mgr_primitive.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu May  6 11:36:09 2010 antoine luciani
** Last update Thu May  6 12:28:13 2010 antoine luciani
*/

#ifndef _MGR_PRIMITIVE_H_
# define _MGR_PRIMITIVE_H_

struct	s_mgr_image;
struct	s_mgr_vec2i;

void	mgr_draw_line(struct s_mgr_vec2i *beg,
		      struct s_mgr_vec2i *end,
		      struct s_mgr_image *img,
		      int color);

#endif /* !_MGR_PRIMITIVE_H_ */
