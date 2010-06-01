/*
** my_str_isalpha.c for my_str_isalpha in /u/all/lucian_b/cu/work/piscine/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 13:24:21 2010 antoine luciani
** Last update Tue Jun  1 14:53:06 2010 antoine luciani
*/

#include "my.h"

t_my_bool	my_str_isalpha(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < 'a' || str[i] > 'z') &&
	  (str[i] < 'A' || str[i] > 'Z'))
	return (MY_FALSE);
      i += 1;
    }
  return (MY_TRUE);
}
