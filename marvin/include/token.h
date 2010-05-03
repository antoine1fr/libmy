/*
** token.h for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:41:52 2010 antoine luciani
** Last update Sun Apr 25 22:41:54 2010 antoine luciani
*/

#ifndef _TOKEN_H_
# define _TOKEN_H_

#include "list.h"

#define IS_VALID_CHAR(x) ((x >= 'a' && x <= 'z') ||	\
  (x >= 'A' && x <= 'Z') || \
  (x >= '0' && x <= '9'))

typedef enum		e_token_type
  {
    TOK_TYPE_NAME,
    TOK_TYPE_TYPE,
    TOK_TYPE_BEG_PAR,
    TOK_TYPE_END_PAR,
    TOK_TYPE_STAR
  }			t_token_type;

typedef struct		s_token
{
  t_token_type		type;
  void			*value;
}			t_token;

/*
** Creates a list of token by analysing a string.
*/
t_list	*tokenize(char *str);

/*
** Prints a sentence wich describe a type token.
*/
void	print_type(t_token *token_ptr);

#endif /* _TOKEN_H_ */
