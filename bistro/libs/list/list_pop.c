/*
** list_remove_first.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 11:25:32 2010 remy radix
** Last update Wed Apr  7 11:06:21 2010 remy radix
*/

#include <stdlib.h>

t_list		*list_pop(t_list *list, void (*destroy_func)(void**))
{
  t_list_node	*tmp;

  if ((!list) || (!list->first))
    return (0);
  tmp = list->first;
  list->first = list->first->next;
  if (destroy_func)
    (*destroy_func)(&(tmp->data));
  free(tmp);
  list->size--;
  return (list);
}
