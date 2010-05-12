/*
** list_append_data.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:57:02 2010 antoine luciani
** Last update Fri Mar 26 14:08:45 2010 antoine luciani
*/

#include "list.h"

int		list_append_data(t_list *list, void *data)
{
  t_list_node	*node;

  if (!list || !data)
    return (LIST_ERROR_BAD_POINTER);
  node = list_create_node(data);
  return (list_append_node(list, node));
}
