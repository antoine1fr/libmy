/*
** op_calc_len_and_max.c for bistromathique in /u/all/lucian_b/cu/work/bistro
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 31 14:17:31 2010 antoine luciani
** Last update Wed Mar 31 14:23:34 2010 antoine luciani
*/

#include "my.h"
#include "operations.h"

/*
** Computes the number of digit of each number and
** returns the max.
*/
int	op_calc_len_and_max(char *n1, int *len1,
			    char *n2, int *len2)
{
  int	max;

  *len1 = my_strlen(n1);
  *len2 = my_strlen(n2);
  max = MAX(*len1, *len2);
  return (max);
}
