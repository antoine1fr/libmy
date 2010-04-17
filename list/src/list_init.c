/*
** list_init.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:16:29 2010 antoine luciani
** Last update Thu Apr 15 13:58:22 2010 antoine luciani
*/

#include <stdlib.h>

#include "list.h"

int		list_init(t_list *list)
{
  if (!list)
    return (LIST_ERROR_BAD_POINTER);
  list->first = 0;
  list->last = 0;
  list->node_count = 0;
  return (LIST_ERROR_OK);
}
