/*
** list_print_data.c for linked lists in /u/all/lucian_b/cu/util/c/list/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 14:29:23 2010 antoine luciani
** Last update Thu Apr 15 11:11:47 2010 antoine luciani
*/

#include "list.h"

void		list_print_data(t_list *list, void (*f)())
{
  t_list_node	*node;

  node = list->first;
  while (node != 0)
    {
      f(node->data);
      node = node->next;
    }
}
