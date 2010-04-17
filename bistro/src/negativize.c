/*
** negativize.c for bistromathique in /u/all/lucian_b/cu/work/bistro/trunk
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Apr  5 18:07:34 2010 antoine luciani
** Last update Mon Apr  5 18:09:52 2010 antoine luciani
*/

#include "my.h"

char		*negativize(char *num)
{
  char		*result;

  result = xmalloc(my_strlen(num) + 2);
  result[0] = '-';
  my_strcpy(result + 1, num);
  return (result);
}
