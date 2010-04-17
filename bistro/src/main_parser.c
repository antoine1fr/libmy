/*
** main_parser.c for bistro in /u/all/radix_r/cu/work/bistro
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Apr  7 10:27:13 2010 remy radix
** Last update Wed Apr  7 18:21:01 2010 remy radix
*/

#include "my.h"
#include "list.h"
#include "bin_tree.h"
#include "parser.h"
#include "token.h"
#include <stdlib.h>
#include "bistromathique.h"

void		display_token(void *t)
{
  t_token	*tok;

  tok = (t_token *)t;
  my_putstr("type : ");
  if (tok->type == TOKEN_OP)
    my_putstr("OPERATOR\n");
  else
    my_putstr("NUMERATOR\n");
  my_putstr("value : ");
  my_putstr(tok->value);
  my_putstr("\nvalue len : ");
  my_put_nbr(tok->val_len);
  my_putstr("\nweight : ");
  my_put_nbr(tok->weight);
  my_putchar('\n');
}

void		display_tree(t_bin_tree *root)
{
  if (!root)
    return ;
  display_token(root->data);
  if (root->left)
    {
      my_putstr("left :\n");
      display_tree(root->left);
    }
  if (root->right)
    {
      my_putstr("right :\n");
      display_tree(root->right);
    }
  my_putchar('\n');
}

int		main(int ac, char **av)
{
  t_list	*list;
  t_exp_desc	exp_desc;
  t_bin_tree	*tree;

  if (ac != 4)
    {
      my_putstr("Usage : calc base operators exp\n");
      return (-1);
    }
  exp_desc.base = av[1];
  exp_desc.base_len = my_strlen(av[1]);
  exp_desc.ops = av[2];
  if (!syntaxe_check(av[3], exp_desc))
    {
      my_putstr(SYNTAXE_ERROR_MSG);
      my_putstr("\n");
      return (EXIT_FAILURE);
    }
  my_putstr("parsing...\n");
  list = parser(av[3], exp_desc);
  my_putstr("creating tree...\n");
  tree = bin_tree_create(list);
  display_tree(tree);
  my_putstr("destroying list...\n");
  list_destroy(list, 0);
  my_putstr("destroying tree...\n");
  bin_tree_destroy(&tree, token_destroy);
  return (EXIT_SUCCESS);
}
