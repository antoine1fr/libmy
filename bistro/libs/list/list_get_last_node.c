/*
** list_get_last_node.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Sat Mar 27 19:36:35 2010 remy radix
** Last update Sat Mar 27 19:39:17 2010 remy radix
*/

#include "list.h"

t_list_node	*list_get_last_node(t_list *list,
				    void *data,
				    int (*cmp_func)())
{
  t_list_node	*cur;
  t_list_node	*res;

  cur = list->first;
  res = 0;
  while (cur)
    {
      if ((cmp_func)(cur->data, data) == 0)
	res = cur;
      cur = cur->next;
    }
  return (res);
}
