/*
** mgr_device.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Apr 20 14:25:13 2010 antoine luciani
** Last update Tue May  4 17:10:16 2010 antoine luciani
*/

#ifndef _MGR_DEVICE_H_
# define _MGR_DEVICE_H_

# define MGR_RENDER_DOUBLEBUF 2

typedef struct	s_mgr_device
{
  void		*mlx_ptr;
  int		render_flags;
}		t_mgr_device;

/*
** Creates a my_graphics device.
**
** @return a pointer to the device.
*/
t_mgr_device	*mgr_create_device();

/*
** Free the my_graphics device and all its stuff.
** Don't forget to re-affect your t_mgr_device* to NULL.
**
** @param device : pointer to the my_graphics device.
*/
void		mgr_destroy(t_mgr_device *device);

#endif /* _MGR_DEVICE_H_ */
