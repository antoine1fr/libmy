/*
** btree.h for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 10:34:38 2010 antoine luciani
** Last update Mon May 24 10:45:30 2010 antoine luciani
*/

#ifndef BTREE_H_
# define BTREE_H_

typedef struct		s_btree_node
{
  struct s_btree_node	*left_ptr;
  struct s_btree_node	*right_ptr;
  void			*data;
  void			*sort_data;
}			t_btree_node;

void	btree_init_node(t_btree_node **root_ptr);

#endif /* !BTREE_H_ */
