/*
** list_push_data.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:57:35 2010 antoine luciani
** Last update Sat Apr 24 15:44:21 2010 antoine luciani
*/

#include "list.h"

int		list_push_data(t_list *list, void *data)
{
  t_list_node	*node;

  if (!list)
    return (LIST_ERROR_BAD_POINTER);
  node = list_create_node(data);
  return (list_push_node(list, node));
}
