/*
** list_app.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 11:36:43 2010 remy radix
** Last update Sun Mar 28 22:02:01 2010 remy radix
*/

t_list		*list_app(t_list *list, void *data)
{
  t_list_node	*new;

  if (!list)
    return (0);
  if (!data)
    return (list);
  new = list_create_node(data);
  if (!list->last)
    list->first = new;
  else
    list->last->next = new;
  list->last = new;
  list->size++;
  return (list);
}
