/*
** list.h for linked lists in /u/all/lucian_b/cu/work/piscine/Jour_11
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 23 09:11:53 2010 antoine luciani
** Last update Thu Apr 15 11:38:57 2010 antoine luciani
*/

#ifndef	LIST_H
# define LIST_H

#define LIST_ERROR_OK 0
#define LIST_ERROR_BAD_POINTER 1
#define LIST_ERROR_MALLOC 2

/*
** Describes a node in a linked list.
*/
typedef struct		s_list_node
{
  void			*data;
  struct s_list_node	*next;
}			t_list_node;

/*
** Describes a linked list.
*/
typedef struct		s_list
{
  struct s_list_node	*first;
  struct s_list_node	*last;
  int			node_count;
}			t_list;

/*
** Initializes a linked list.
*/
int		list_init(t_list *list);

/*
** Creates a list node.
*/
t_list_node	*list_create_node(void *data);

/*
** Destroy every nodes of a linked list.
*/
int		list_clean(t_list *list);

/*
** Appends a node to the begin of a linked list.
*/
int		list_append_node(t_list *list, t_list_node *node);

/*
** Appends a node to the end of a linked list.
*/
int		list_push_node(t_list *list, t_list_node *node);

/*
** Appends data to the end of a linked list.
*/
int		list_append_data(t_list *list, void *data);

/*
** Appends data at the begining of a linked list.
*/
int		list_push_data(t_list *list, void *data);

/*
** Print every element's data.
*/
void		list_print_data(t_list *list, void (*f)());

/*
** Remove the last element of a list.
*/
t_list_node	*list_pop_element(t_list *list);

#endif
