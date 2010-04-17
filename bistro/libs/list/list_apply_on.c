/*
** list_apply_on.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Sat Mar 27 16:24:42 2010 remy radix
** Last update Sat Mar 27 16:26:19 2010 remy radix
*/

#include "list.h"

void	list_apply_on(t_list *list, void (*func)())
{
  t_list_node	*cur;

  if (!list)
    return ;
  cur = list->first;
  while (cur)
    {
      (*func)(cur->data);
      cur = cur->next;
    }
}
