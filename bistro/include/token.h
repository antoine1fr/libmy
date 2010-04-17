/*
** token.h for bistromatic in /u/all/radix_r/cu/work/bistro/src
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Mar 31 10:02:09 2010 remy radix
** Last update Wed Apr  7 11:04:01 2010 remy radix
*/

#ifndef TOKEN_H_
# define TOKEN_H_
# define TOKEN_NUM	1
# define TOKEN_OP	2
# define OP_PRIO_LOW	4
# define OP_PRIO_HIGHT	8
# define OP_SHIFT	16

typedef struct	s_token
{
  int		type;
  int		weight;
  int		val_len;
  char		*value;
}		t_token;

t_token		*token_create(int type, int shift, char *val, int size);
void		token_destroy(void **token);

#endif /* !TOKEN_H_ */
