/*
** list_append_node.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:55:51 2010 antoine luciani
** Last update Thu Apr 15 11:19:33 2010 antoine luciani
*/

#include "list.h"

int		list_append_node(t_list *list, t_list_node *node)
{
  if (!node || !list)
    return (LIST_ERROR_BAD_POINTER);
  if (!list->first)
    {
      list->first = node;
      list->last = node;
    }
  else
    {
      list->last->next = node;
      list->last = node;
    }
  list->node_count += 1;
  return (LIST_ERROR_OK);
}
