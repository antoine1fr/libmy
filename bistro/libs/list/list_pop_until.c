/*
** list_pop_until.c for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 12:22:11 2010 remy radix
** Last update Wed Apr  7 11:07:48 2010 remy radix
*/

t_list		*list_pop_until(t_list *list,
				t_list_node *to,
				void (*destroy_func)(void**))
{
  if (!list)
    return (0);
  while (list->first != to)
    list_pop(list, destroy_func);
  return (list);
}
