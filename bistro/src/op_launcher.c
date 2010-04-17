/*
** op_launcher.c for bistromathique in /u/all/lucian_b/cu/work/bistro/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Apr  2 10:57:45 2010 antoine luciani
** Last update Wed Apr  7 17:41:26 2010 remy radix
*/

#include "my.h"
#include "operations.h"
#include "exp_desc.h"

t_operation gl_op_tab[] = {
  {'+', op_plus_prep_and_launch},
  {'-', op_less_prep_and_launch},
  {'*', op_mul_prep_and_launch},
  {0, 0}
};

/*
** Computes the sign of the giver number and find the
** begin of the number in the string.
*/
void		check_num_sign(char *n, char **begin, int *sign)
{
  int		sign_count;

  sign_count = 0;
  while (*n != 0 && !IS_NUMBER(*n))
    {
      if (*n == '-')
	sign_count += 1;
      n += 1;
    }
  *begin = n;
  if (sign_count % 2 == 0)
    *sign = POSITIVE;
  else
    *sign = NEGATIVE;
}

char		*op_launch(char *n1, char *n2, char op)
{
  t_number	num1;
  t_number	num2;
  int		index;

  num1.num = n1;
  check_num_sign(n1, &(num1.begin), &(num1.sign));
  num2.num = n2;
  check_num_sign(n2, &(num2.begin), &(num2.sign));
  index = 0;
  while (gl_op_tab[index].operator != 0 &&
	 gl_op_tab[index].operator != op)
    index += 1;
  if (op == gl_op_tab[index].operator)
      return (swiffer(gl_op_tab[index].f(&num1, &num2)));
  return (0);
}
