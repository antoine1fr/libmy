/*
** window.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:22:03 2010 antoine luciani
** Last update Tue Apr 20 14:24:54 2010 antoine luciani
*/

#ifndef _WINDOW_H_
# define _WINDOW_H_

typedef struct	s_window
{
  void		*wnd_ptr;
  int		width;
  int		height;
}		t_window;

t_window	*mgr_create_window(t_mgr_device *device);

#endif /* !_WINDOW_H_ */
