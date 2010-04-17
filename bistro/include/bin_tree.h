/*
** bin_tree.h for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 09:59:27 2010 remy radix
** Last update Wed Mar 31 09:59:28 2010 remy radix
*/

#ifndef BIN_TREE_H_
# define BIN_TREE_H_

#include "list.h"

typedef struct		s_bin_tree
{
  struct s_bin_tree	*left;
  struct s_bin_tree	*right;
  void			*data;
}			t_bin_tree;

t_bin_tree	*bin_tree_create(t_list *list);
void		bin_tree_destroy(t_bin_tree **root, void (*destroy_func)());

#endif /* !BIN_TREE_H_ */
