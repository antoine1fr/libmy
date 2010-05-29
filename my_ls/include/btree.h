/*
** btree.h for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 10:34:38 2010 antoine luciani
** Last update Sat May 29 17:43:52 2010 antoine luciani
*/

#ifndef BTREE_H_
# define BTREE_H_

typedef int	(*t_comp_func) (void *ptr1, void *ptr2);
typedef void	(*t_clean_data_func) (void *ptr);

typedef struct		s_btree_node
{
  struct s_btree_node	*left_ptr;
  struct s_btree_node	*right_ptr;
  void			*data;
  void			*sort_data;
}			t_btree_node;

typedef struct		s_btree
{
  t_btree_node		*root_ptr;
  t_comp_func		compare;
  t_clean_data_func	clean_data;
}			t_btree;

/*
** Initialized a binary tree.
*/
void	btree_init(t_btree *tree_ptr, t_comp_func comp_func,
		   t_clean_data_func clean_func);

/*
** Initializes a binary tree node.
*/
void	btree_init_node(t_btree_node **node_ptr);

/*
** Appends a node to a binary tree.
*/
void	btree_append_node(t_btree_node *node_ptr, t_btree *tree_ptr);

/*
** Appends data to a binary tree.
**
** Notes :
** - sort_data is used to place the data correctly in the tree
** - data will be freed automatically but not sort_data
*/
void	btree_append_data(void *data, void *sort_data, t_btree *tree_ptr);

/*
** Cleans a binary tree
*/
void	btree_clean(t_btree *tree_ptr);

/*
** Generates 1000000 strings and sorts them into
** a binary tree.
*/
void	btree_bench();

#endif /* !BTREE_H_ */
