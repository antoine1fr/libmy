/*
** my_is_prime.c for my_is_prime in /u/all/lucian_b/cu/work/piscine/Jour_05
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 16 16:46:22 2010 antoine luciani
** Last update Fri Mar 19 10:54:48 2010 antoine luciani
*/

int		my_is_prime(int nbr)
{
  int		i;

  i = 2;
  while (i <= nbr / 2)
    {
      if (nbr % i == 0)
	return (0);
      i += 1;
    }
  return (1);
}
