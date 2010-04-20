/*
** mgr_device.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:25:13 2010 antoine luciani
** Last update Tue Apr 20 14:26:54 2010 antoine luciani
*/

#ifndef _MGR_DEVICE_H_
# define _MGR_DEVICE_H_

typedef struct	s_mgr_device
{
  void		*mlx_ptr;
}		t_mgr_device;

t_mgr_device	*mgr_create_device();

#endif /* _MGR_DEVICE_H_ */
