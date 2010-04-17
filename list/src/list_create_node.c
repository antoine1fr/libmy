/*
** list_create_node.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:55:03 2010 antoine luciani
** Last update Fri Mar 26 14:25:16 2010 antoine luciani
*/

#include <stdlib.h>
#include "list.h"

t_list_node	*list_create_node(void *data)
{
  t_list_node	*node;

  node = malloc(sizeof(t_list_node));
  if (!node)
    return (0);
  node->data = data;
  node->next = node->next;
  return (node);
}
