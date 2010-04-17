/*
** list_push.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 11:32:12 2010 remy radix
** Last update Fri Mar 26 15:12:49 2010 remy radix
*/

t_list		*list_push(t_list *list, void *data)
{
  t_list_node	*new;

  if (!list)
    return (0);
  new = list_create_node(data);
  if (!list->first)
    list->last = new;
  else
    new->next = list->first;
  list->first = new;
  list->size++;
  return (list);
}
