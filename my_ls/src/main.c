/*
** main.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 23 10:38:44 2010 antoine luciani
** Last update Wed May 26 17:44:54 2010 antoine luciani
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

char		*gen_str()
{
  int		i;
  char		*str;

  str = xmalloc(sizeof(*str) * 15);
  i = 0;
  while (i < 15)
    {
      str[i] = (rand() % ('z' - 'a')) + 'a';
      i += 1;
    }
  return (str);
}

void		print_tree(t_btree_node *node_ptr)
{
  if (!node_ptr)
    return;
  print_tree(node_ptr->left_ptr);
  my_putstr((char *)node_ptr->data);
  my_putchar('\n');
  print_tree(node_ptr->right_ptr);
}

int		main()
{
  t_btree	elt_tree;
  int		i;
  char		*str;

  btree_init(&elt_tree, comp_elements, free);
  srand(time(0));
  i = 0;
  while (i < 1000000)
    {
      str = gen_str();
      btree_append_data(str, str, &elt_tree);
      i += 1;
    }
  btree_clean(&elt_tree);
  return (EXIT_SUCCESS);
}
