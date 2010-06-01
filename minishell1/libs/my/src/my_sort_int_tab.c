/*
** my_sort_int_tab.c for my_sort_int_tab in /u/all/lucian_b/cu/test/Jour_04
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Mar 11 17:58:12 2010 antoine luciani
** Last update Fri Mar 19 11:04:40 2010 antoine luciani
*/

#include "my.h"

/*
int		my_swap(int *n1, int *n2)
{
  int		tmp;

  tmp = *n1;
  *n1 = *n2;
  *n2 = tmp;
}
*/

void		my_sort_int_tab(int *tab, int size)
{
  int		i;
  int		pass;

  pass = 0;
  while (pass < size)
    {
      i = 0;
      while (i < size - 1)
	{
	  if (tab[i] > tab[i + 1])
	    my_swap(&tab[i], &tab[i + 1]);
	  i = i + 1;
	}
      pass = pass + 1;
    }
}
