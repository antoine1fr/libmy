/*
** mgr_vec2i.h for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu May  6 11:33:06 2010 antoine luciani
** Last update Fri May  7 10:07:05 2010 antoine luciani
*/

#ifndef _MGR_VEC2I_H_
# define _MGR_VEC2I_H_

typedef struct	s_mgr_vec2i
{
  int		x;
  int		y;
}		t_mgr_vec2i;

void		mgr_vec2i_copy(t_mgr_vec2i *from, t_mgr_vec2i *to);

#endif /* _MGR_VEC2I_H_ */
