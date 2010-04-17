/*
** list_create.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 10:42:56 2010 remy radix
** Last update Fri Mar 26 14:03:00 2010 remy radix
*/

#include <string.h>
#include <my.h>

t_list		*list_create()
{
  t_list	*list;

  list = xmalloc(sizeof(*list));
  memset(list, 0, sizeof(*list));
  return (list);
}
