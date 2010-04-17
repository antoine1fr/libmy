/*
** list_destroy.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 11:20:18 2010 remy radix
** Last update Wed Apr  7 11:07:25 2010 remy radix
*/

#include <stdlib.h>

t_list		*list_destroy(t_list *list, void (*destroy_func)(void**))
{
  if (!list)
    return (0);
  while (list->size)
    list = list_pop(list, destroy_func);
  free(list);
  return (0);
}
