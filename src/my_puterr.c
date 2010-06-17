/*
** my_puterr.c for libmy in /u/all/lucian_b/cu/work/bistro/libs/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 30 11:20:47 2010 antoine luciani
** Last update Tue Jun  8 12:46:50 2010 antoine luciani
*/

#include <unistd.h>
#include "my.h"

void		my_puterr(const char *str)
{
  write(2, str, my_strlen(str));
}
