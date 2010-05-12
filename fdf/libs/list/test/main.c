/*
** main.c for test_lists in /u/all/lucian_b/cu/util/c/list/trunk/test
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 14 14:26:21 2010 antoine luciani
** Last update Thu Apr 15 14:01:56 2010 antoine luciani
*/

#include "my.h"
#include "list.h"

void		print_string(char *str)
{
  my_putstr(str);
  my_putchar('\n');
}

int		main(int argc, char **argv)
{
  t_list	list;
  char		*str;

  list_init(&list);
  str = "hihihi";
  list_push_data(&list, str);
  str = "Hello, word!";
  list_push_data(&list, str);
  str = "Blabla, blabla, blabla";
  list_append_data(&list, str);
  my_putstr("node count : ");
  my_put_nbr(list.node_count);
  my_putchar('\n');
  list_print_data(&list, print_string);
  list_clean(&list);
  my_putstr("list cleaned\nnode count: ");
  my_put_nbr(list.node_count);
  my_putchar('\n');
  return (0);
}
