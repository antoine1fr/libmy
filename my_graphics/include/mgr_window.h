/*
** mgr_window.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:52:55 2010 antoine luciani
** Last update Tue Apr 20 15:55:15 2010 antoine luciani
*/

#ifndef _MGR_WINDOW_H_
# define _MGR_WINDOW_H_

typedef struct	s_mgr_window
{
  void		*wnd_ptr;
  int		width;
  int		height;
}		t_mgr_window;

/*
** Creates a new window.
**
** @param title : the title of the window.
** @param width : the width of the window in pixels.
** @param height : the height of the window in pixels.
**
** @return the address of the new window or 0, if the creation failed.
*/
t_mgr_window	*mgr_create_window(char *title, int width, int height);

#endif /* !_MGR_WINDOW_H_ */
