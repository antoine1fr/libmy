/*
** mgr_vec2i_copy.c for my_graphics in /u/all/lucian_b/cu/work/my_graphics
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri May  7 10:07:24 2010 antoine luciani
** Last update Fri May  7 10:08:25 2010 antoine luciani
*/

#include "mgr_vec2i.h"

void		mgr_vec2i_copy(t_mgr_vec2i *from, t_mgr_vec2i *to)
{
  if (!from || !to)
    return;
  to->x = from->x;
  to->y = from->y;
}
