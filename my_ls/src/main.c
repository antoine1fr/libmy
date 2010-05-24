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

int		main(int argc, char **argv)
{
  t_btree	tree;

  btree_init(&tree, my_strcmp, free);
  return (EXIT_SUCCESS);
}
