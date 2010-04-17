/*
** op_get_right_value.c for bistromathique in /u/all/lucian_b/cu/work/bistro
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Mar 31 15:58:58 2010 antoine luciani
** Last update Thu Apr  1 17:03:18 2010 remy radix
*/

char	op_get_right_value(char *num, int size, int max, int index)
{
  int	correct_index;

  correct_index = index - max + size;
  if (correct_index >= 0)
    return (num[correct_index] - '0');
  else
    return (0);
}
