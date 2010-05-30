/*
** btree_bench.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sat May 29 17:30:51 2010 antoine luciani
** Last update Sat May 29 21:58:59 2010 antoine luciani
*/

#include <time.h>
#include <stdlib.h>

#include "my.h"
#include "btree.h"

static int	btree_comp_element(void *ptr1, void *ptr2)
{
  return (my_strcmp((char *)ptr1, (char *)ptr2));
}

static char	*btree_gen_str()
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

static void	btree_bench_print(const t_btree_node *node_ptr)
{
  if (!node_ptr)
    return;
  btree_bench_print(node_ptr->left_ptr);
  my_putstr((char *)node_ptr->data);
  my_putchar('\n');
  btree_bench_print(node_ptr->right_ptr);
}

void		btree_bench()
{
  t_btree	tree;
  char		*str;
  int		i;

  srand(time(0));
  btree_init(&tree, btree_comp_element, free);
  i = 0;
  my_putstr("Sorting 10,000,000 strings(15) by ASCII order...\n");
  while (i < 10000000)
    {
      str = btree_gen_str();
      btree_append_data(str, str, &tree);
      i += 1;
    }
  btree_bench_print(tree.root_ptr);
  btree_clean(&tree);
}
