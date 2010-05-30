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
#include <stdio.h>
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
  if (elt_ptr->stat_ptr)
    free(elt_ptr->stat_ptr);
  free(elt_ptr);
}

void		mls_print_dir(const t_btree_node *node_ptr)
{
  t_mls_element	*elt_ptr;

  if (node_ptr)
    {
      mls_print_dir(node_ptr->left_ptr);
      elt_ptr = (t_mls_element *)node_ptr->data;
      my_putstr(elt_ptr->dirent_ptr->d_name);
      my_putchar('\n');
      mls_print_dir(node_ptr->right_ptr);
    }
}

void		my_ls_simple_and_rec(const char *path)
{
  t_btree	elt_tree;
  t_list	dir_list;
  t_list_node	*node_ptr;

  btree_init(&elt_tree, comp_elements, clean_element);
  list_init(&dir_list, free);
  mls_read_dir(path, 0, &elt_tree, &dir_list);
  my_putstr("ls of ");
  my_putstr(path);
  my_putstr(" :\n");
  mls_print_dir(elt_tree.root_ptr);
  my_putstr("-----------\n");
  btree_clean(&elt_tree);
  node_ptr = dir_list.first;
  while (node_ptr)
    {
      my_ls_simple_and_rec((char *)node_ptr->data);
      node_ptr = node_ptr->next;
    }
}

int		main(int argc, char **argv)
{
  if (argc == 2)
      my_ls_simple_and_rec(argv[1]);
  else
    {
      my_puterr("[ERROR] : missing arguments!\n");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
