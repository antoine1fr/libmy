/*
** list_pop_element.c for linked lists in /u/all/lucian_b/cu/work/piscine/Jour_11
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 23 09:11:53 2010 antoine luciani
** Last update Thu Apr 15 11:38:57 2010 antoine luciani
*/

#include "list.h"

t_list_node		*list_pop_element(t_list *list)
{
  t_list_node		*node;
  t_list_node		*penultimate;

  if (!list)
    return (0);
  node = list->first;
  penultimate = 0;
  while(node->next)
    {
      penultimate = node;
      node = node->next;
    }
  if (node == list->first)
    list_init(list);
  else
    {
      list->last = penultimate;
      penultimate->next = 0;
      list->node_count -= 1;
    }
  return (node);
}
