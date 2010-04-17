/*
** operations.h for bistromatique in /u/all/lucian_b/cu/work/bistro
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 31 14:20:02 2010 antoine luciani
** Last update Wed Apr  7 17:05:14 2010 remy radix
*/

#ifndef OPERATIONS_H
# define OPERATIONS_H

# define POSITIVE 0
# define NEGATIVE 1
# define MAX(x, y) (x > y) ? x : y
# define IS_NUMBER(x) ((x) >= '0' && (x) <= '9')
# define XOR(x, y) (((x) && !(y)) || ((y) && !(x))) ? 1 : 0

typedef struct	s_number
{
  char		*num;
  char		*begin;
  int		sign;
}		t_number;

typedef struct	s_operation
{
  char		operator;
  char		*(*f)(t_number *n1, t_number *n2);
}		t_operation;

char *swiffer(char *n);
char *negativize(char *num);
char *op_launch(char *n1, char *n2, char op);
char op_get_right_value(char *num, int size, int max, int index);
int op_calc_len_and_max(char *n1, int *len1, char *n2, int *len2);
char *op_add(char *n1, char *n2);
char *op_sub(char *n1, char *n2);
char *op_mul(char *nb1, char *nb2);
char *op_plus_prep_and_launch(t_number *n1, t_number *n2);
char *op_less_prep_and_launch(t_number *n1, t_number *n2);
char *op_mul_prep_and_launch(t_number *n1, t_number *n2);

#endif /* !OPERATIONS_H */
