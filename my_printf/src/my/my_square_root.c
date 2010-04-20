/*
** my_square_root.c for my_square_root in /u/all/lucian_b/cu/work/piscine/Jour_05
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 15:52:59 2010 antoine luciani
** Last update Tue Mar 16 16:42:58 2010 antoine luciani
*/

int		my_square_root(int nb)
{
  int		i;

  i = 0;
  while (i <= nb / 2)
    {
      if ((i * i) == nb)
	return (i);
      i += 1;
    }
  return (0);
}
