/*
** print_func.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:39:13 2010 antoine luciani
** Last update Sun Apr 25 22:39:14 2010 antoine luciani
*/

#include		<stdio.h>
#include		<stdlib.h>
#include		<string.h>

#include		"list.h"
#include		"token.h"
#include		"decl.h"

static void		print_var(t_list_node *node);
static void		print_ptr_func(t_list_node *node);
static void		print_func(t_list_node *node);

typedef struct		s_print_func_tab
{
  t_decl_type		type;
  void			(*f) (t_list_node *node);
}			t_print_func_tab;

t_print_func_tab	gl_print_func_tab[] = {
  {DECL_TYPE_VAR, print_var},
  {DECL_TYPE_FUNC, print_func},
  {DECL_TYPE_PTR_FUNC, print_ptr_func},
  {0, 0}
};

static void		print_var(t_list_node *node)
{
  t_decl		*decl_ptr;

  decl_ptr = (t_decl *)node->data;
  printf("d'une variable %s de type ",
	 (char *)decl_ptr->token_name->value);
  print_type(decl_ptr->token_type);
  if (node->next != 0)
    printf(" et ");
}

static void		print_ptr_func(t_list_node *node)
{
  t_decl		*decl_ptr;

  decl_ptr = (t_decl *)node->data;
  printf("d'un pointeur sur fonction %s de type ",
	 (char *)decl_ptr->token_name->value);
  print_type(decl_ptr->token_type);
  if (node->next != 0)
    printf(" et prenant en parametre ");
}

static void		print_func(t_list_node *node)
{
  t_decl		*decl_ptr;

  decl_ptr = (t_decl *)node->data;
  printf("d'une fonction %s renvoyant un ",
	 (char *)decl_ptr->token_name->value);
  print_type(decl_ptr->token_type);
  if (node->next != 0)
    printf(" et prenant en parametre ");
}

static void		launch_prt_func(t_list_node *node)
{
  int			i;
  t_decl		*decl_ptr;

  decl_ptr = (t_decl *)node->data;
  i = 0;
  while (gl_print_func_tab[i].type != 0)
    {
      if (gl_print_func_tab[i].type == decl_ptr->type)
	gl_print_func_tab[i].f(node);
      i += 1;
    }
}

void			print_decl(t_list_node *node)
{
  printf("Declaration ");
  while (node->next != 0)
    {
      launch_prt_func(node);
      node = node->next;
    }
  printf(".\n");
}
