/*
** main.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 23 10:38:44 2010 antoine luciani
** Last update Sat May 29 22:02:56 2010 antoine luciani
*/

#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <time.h>

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
  free(elt_ptr->dirent_ptr);
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
  my_putstr(elt_ptr->dirent_ptr->d_name);
  simple_dir_print(node_ptr->right_ptr);
}

int		main(int argc, char **argv)
{
  t_btree	elt_tree;
  t_list	dir_list;

  if (argc == 2)
    {
      btree_init(&elt_tree, comp_elements, clean_element);
      list_init(&dir_list);
      mls_read_dir(argv[1], 0, &elt_tree, &dir_list);
      btree_clean(&elt_tree);
      list_clean(&dir_list);
    }
  else
    {
      my_puterr("[ERROR] : missing arguments!\n");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
