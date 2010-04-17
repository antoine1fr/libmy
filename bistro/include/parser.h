/*
** parser.h for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:00:44 2010 remy radix
** Last update Wed Apr  7 18:18:46 2010 remy radix
*/

#ifndef PARSER_H_
# define PARSER_H_

#include "exp_desc.h"
#include "list.h"
#include "token.h"

int		parser_is_num(char c, t_list_node *last, t_exp_desc exp_desc);
int		parser_is_op(char c, t_exp_desc exp_desc);
int		parser_add_num(char *s, t_list *list, t_exp_desc exp_desc);
int		parser_add_op(char *s,
			      int shift,
			      t_list *list,
			      t_exp_desc exp_desc);
t_list		*parser(char *s, t_exp_desc exp_desc);
int		syntaxe_check(char *s, t_exp_desc exp_desc);

#endif /* !PARSER_H_ */
