/*
** list_clean.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 11:21:59 2010 antoine luciani
** Last update Thu Apr 15 13:59:25 2010 antoine luciani
*/

#include <stdlib.h>
#include "list.h"

int		list_clean(t_list *list)
{
  t_list_node	*node;

  if (!list)
    return (LIST_ERROR_BAD_POINTER);
  while (list->first != 0)
    {
      node = list->first;
      list->first = list->first->next;
      free(node);
    }
  list_init(list);
  return (LIST_ERROR_OK);
}
