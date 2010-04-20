/*
** mgr_window.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:52:55 2010 antoine luciani
** Last update Tue Apr 20 14:56:20 2010 antoine luciani
*/

#ifndef _MGR_WINDOW_H_
# define _MGR_WINDOW_H_

typedef struct	s_mgr_window
{
  void		*wnd_ptr;
  int		width;
  int		heigth;
}		t_mgr_window;

t_mgr_window	*mgr_create_window();

#endif /* !_MGR_WINDOW_H_ */
