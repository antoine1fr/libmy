/*
** my_putstr.c for my_putstr in /u/all/lucian_b/cu/test/Jour_04
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Mar 11 10:00:15 2010 antoine luciani
** Last update Tue Jun  1 14:43:22 2010 antoine luciani
*/

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include "my.h"

void		my_putstr(const char *str)
{
  int		len;

  if (str)
    {
      len = my_strlen(str);
      if (len > 0)
	write(1, str, len);
    }
}
