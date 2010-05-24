/*
** main.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 23 10:38:44 2010 antoine luciani
** Last update Mon May 24 12:57:08 2010 antoine luciani
*/

#include <stdlib.h>

#include "my.h"
#include "btree.h"

void		print_node(t_btree_node *node_ptr)
{
  if (!node_ptr)
    return;
  print_node(node_ptr->left_ptr);
  my_putstr((char *)node_ptr->data);
  my_putchar('\n');
  print_node(node_ptr->right_ptr);
}

void		print_tree(t_btree *tree_ptr)
{
  if (!tree_ptr)
    return;
  print_node(tree_ptr->root_ptr);
}

int		comp_strings(void *ptr1, void *ptr2)
{
  return (my_strcmp((char *)ptr1, (char *)ptr2));
}

int		main()
{
  t_btree	tree;
  char		*str;

  btree_init(&tree, comp_strings, free);
  str = my_strdup("blabla");
  btree_append_data(str, str, &tree);
  str = my_strdup("antoine");
  btree_append_data(str, str, &tree);
  str = my_strdup("blibli");
  btree_append_data(str, str, &tree);
  print_tree(&tree);
  btree_clean(&tree);
  return (EXIT_SUCCESS);
}
