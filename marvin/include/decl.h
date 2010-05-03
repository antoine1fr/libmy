/*
** decl.h for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:41:26 2010 antoine luciani
** Last update Sun Apr 25 22:41:27 2010 antoine luciani
*/

#ifndef _DECL_H_
# define _DECL_H_

#include "list.h"

typedef enum		e_decl_type
  {
    DECL_TYPE_VAR,
    DECL_TYPE_FUNC,
    DECL_TYPE_PTR_FUNC
  }			t_decl_type;

typedef struct		s_decl
{
  t_token		*token_type;
  t_token		*token_name;
  t_decl_type		type;
}			t_decl;

t_list	*create_decl(t_list *tok_list);
void	print_decl(t_list_node *node);

#endif
