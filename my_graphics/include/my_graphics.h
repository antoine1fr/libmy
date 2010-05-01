/*
** my_graphics.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:58:23 2010 antoine luciani
** Last update Wed Apr 21 11:52:12 2010 antoine luciani
*/

#ifndef _MY_GRAPHICS_H_
# define _MY_GRAPHICS_H_

#include "mgr_device.h"
#include "mgr_window.h"
#include "mgr_image.h"

typedef enum	e_mgr_error
  {
    MGR_ERROR_NONE,
    MGR_ERROR_DEVICE
  }		t_mgr_error;

/*
** Initializes my_graphics.
**
** @return a t_mgr_error.
*/
t_mgr_error	mgr_init();

/*
** Clean up all stuff before exiting the application.
** Don't forget to call this function when you have finished with
** my_graphics.
*/
void		mgr_quit();

#endif /* !_MY_GRAPHICS_H_ */
