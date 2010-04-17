/*
** list.h for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Fri Mar 26 09:51:13 2010 remy radix
** Last update Wed Apr  7 11:08:21 2010 remy radix
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct		s_list_node
{
  struct s_list_node	*next;
  void			*data;
}			t_list_node;

typedef struct		s_list
{
  t_list_node		*first;
  t_list_node		*last;
  int			size;
}			t_list;

t_list		*list_create();
t_list_node	*list_create_node(void *data);
t_list		*list_pop(t_list *list, void (*destroy_func)(void **));
t_list		*list_destroy(t_list *list, void (*destroy_func)(void **));
t_list		*list_sub_list(t_list_node *from, t_list_node *to);
t_list		*list_push(t_list *list, void *data);
t_list		*list_app(t_list *list, void *data);
void		list_apply_on(t_list *list, void (*func)());
t_list_node	*list_get_node(t_list *list,
			       void *data,
			       int (*cmp_func)());
t_list_node	*list_get_last_node(t_list *list,
				    void *data,
				    int (*cmp_func)());
t_list		*list_pop_until(t_list *list,
				t_list_node *to,
				void (*destroy_func)(void **));

#endif /* !LIST_H_ */
