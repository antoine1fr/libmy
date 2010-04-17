/*
** list_create_node.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 11:43:27 2010 remy radix
** Last update Fri Mar 26 14:03:18 2010 remy radix
*/

#include <string.h>
#include <my.h>

t_list_node	*list_create_node(void *data)
{
  t_list_node	*new;

  new = xmalloc(sizeof(*new));
  memset(new, 0, sizeof(*new));
  new->data = data;
  return (new);
}
