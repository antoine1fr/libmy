/*
** my_str_isnum.c for my_str_isnum in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 17:27:53 2010 antoine luciani
** Last update Tue Jun  1 14:53:47 2010 antoine luciani
*/

#include "my.h"

t_my_bool	my_str_isnum(const char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (MY_FALSE);
      i += 1;
    }
  return (MY_TRUE);
}
