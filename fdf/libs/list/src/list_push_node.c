/*
** list_push_node.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:56:32 2010 antoine luciani
** Last update Thu Apr 15 11:19:06 2010 antoine luciani
*/

#include "list.h"

int		list_push_node(t_list *list, t_list_node *node)
{
  if (!node || !list)
    return (LIST_ERROR_BAD_POINTER);
  node->next = list->first;
  list->first = node;
  if (!list->last)
    list->last = node;
  list->node_count += 1;
  return (LIST_ERROR_OK);
}
