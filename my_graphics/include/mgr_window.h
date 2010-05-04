/*
** mgr_window.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:52:55 2010 antoine luciani
** Last update Tue May  4 16:35:07 2010 antoine luciani
*/

#ifndef _MGR_WINDOW_H_
# define _MGR_WINDOW_H_

struct	s_mgr_image;

typedef struct		s_mgr_swap_chain
{
  struct s_mgr_image	*front;
  struct s_mgr_image	*back;
}			t_mgr_swap_chain;

typedef struct		s_mgr_window
{
  void			*wnd_ptr;
  int			width;
  int			height;
  t_mgr_swap_chain	*swap_chain;
}			t_mgr_window;

/*
** Creates a new window.
**
** @param title : the title of the window.
** @param width : the width of the window in pixels.
** @param height : the height of the window in pixels.
**
** @return the address of the new window or 0, if the creation failed.
*/
t_mgr_window		*mgr_create_window(char *title, int width, int height);

/*
** The back-buffer become the front-buffer and the front-buffer
** become the back-buffer.
**
** @param wnd_ptr : pointer to the window.
** @return a pointer to the new back-buffer.
*/
struct s_mgr_image	*mgr_wnd_swap_chain(t_mgr_window *wnd_ptr);

/*
** Destroys a window.
**
** @param wnd_ptr : pointer to the window.
*/
void			mgr_destroy_window(t_mgr_window *wnd_ptr);

#endif /* !_MGR_WINDOW_H_ */
