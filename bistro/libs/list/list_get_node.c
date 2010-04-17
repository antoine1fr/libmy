/*
** list_get_node.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Sat Mar 27 18:15:26 2010 remy radix
** Last update Sat Mar 27 18:18:34 2010 remy radix
*/

#include "list.h"

t_list_node	*list_get_node(t_list *list, void *data, int (*cmp_func)())
{
  t_list_node	*cur;

  if (!list || !cmp_func)
    return (0);
  cur = list->first;
  while (cur)
    {
      if ((*cmp_func)(cur->data, data) == 0)
	return (cur);
      cur = cur->next;
    }
  return (0);
}
