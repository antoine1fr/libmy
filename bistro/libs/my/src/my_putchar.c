/*
** my_putchar.c for my_putchar in /u/all/lucian_b/cu/work/static_var_test
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Mar 14 16:35:00 2010 antoine luciani
** Last update Sun Mar 14 16:35:26 2010 antoine luciani
*/

#include <unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
