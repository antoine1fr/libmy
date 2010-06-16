/*
** my_swap.c for my_swap in /u/all/lucian_b/cu/test/Jour_04
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Mar 11 09:44:42 2010 antoine luciani
** Last update Sat Mar 27 09:26:30 2010 antoine luciani
*/

void		my_swap(int *p1, int *p2)
{
  int		tmp;

  tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}
