/*
** main.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:35:56 2010 antoine luciani
** Last update Sun Apr 25 22:35:57 2010 antoine luciani
*/

#include <stdlib.h>
#include <stdio.h>

#include "list.h"
#include "token.h"
#include "decl.h"

int		main(int argc, char **argv)
{
  t_list	*tok_list;
  t_list	*decl_list;

  if(argc != 2)
    {
      printf("Usage : ./marvin declaration\n");
      return(EXIT_FAILURE);
    }
  tok_list = tokenize(argv[1]);
  if (!tok_list)
    return (EXIT_FAILURE);
  decl_list = create_decl(tok_list);
  if (!decl_list)
    return (EXIT_FAILURE);
  print_decl(decl_list->first);
  return (EXIT_SUCCESS);
}
