/*
** list_sub_list.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 11:57:04 2010 remy radix
** Last update Fri Mar 26 15:13:05 2010 remy radix
*/

t_list		*list_sub_list(t_list_node *from, t_list_node *to)
{
  t_list_node	*cur;
  t_list	*list;

  if (!from)
    return (0);
  list = list_create();
  cur = from;
  while (cur != to)
    {
      list_app(list, cur->data);
      cur = cur->next;
    }
  return (list);
}
