/*
** main.c for test of my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 15:26:58 2010 antoine luciani
** Last update Tue Apr 20 15:30:11 2010 antoine luciani
*/

#include "my_graphics.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
  t_mgr_window	*wnd_ptr;

  if (mgr_init() != MGR_ERROR_NONE)
    return (EXIT_FAILURE);
  wnd_ptr = mgr_create_window("my_graphics - test", 300, 300);
  while (1)
    ;
  mgr_quit();
  return (EXIT_SUCCESS);
}
