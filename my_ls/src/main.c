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

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

#include "btree.h"
#include "list.h"
#include "my.h"
#include "my_ls.h"

int		comp_elements(void *ptr1, void *ptr2)
{
  return (my_strcmp((char *)ptr1, (char *)ptr2));
}

void		clean_element(void *ptr)
{
  t_mls_element	*elt_ptr;

  elt_ptr = (t_mls_element *)ptr;
  free(elt_ptr->stat_ptr);
  free(elt_ptr);
}

void		simple_dir_print(t_btree_node *node_ptr)
{
  t_mls_element	*elt_ptr;

  if (!node_ptr)
    return;
  simple_dir_print(node_ptr->left_ptr);
  elt_ptr = (t_mls_element *)node_ptr->data;
  printf("%s\n", elt_ptr->dirent_ptr->d_name);
  simple_dir_print(node_ptr->right_ptr);
}

int		main(int argc, char **argv)
{
  t_btree	elt_tree;
  t_list	dir_list;
  t_error	error_code;

  if (argc != 2)
    {
      my_puterr("ERROR : missing argument(s)!\n");
      return (EXIT_FAILURE);
    }
  btree_init(&elt_tree, comp_elements, clean_element);
  list_init(&dir_list);
  error_code = mls_read_dir(argv[1], 0, &elt_tree, &dir_list);
  simple_dir_print(elt_tree.root_ptr);
  btree_clean(&elt_tree);
  list_clean(&dir_list);
  return (EXIT_SUCCESS);
}
