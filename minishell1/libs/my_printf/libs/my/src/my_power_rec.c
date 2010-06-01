/*
** my_power_rec.c for my_power_rec in /u/all/lucian_b/cu/work/Jour_05
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 12 11:01:08 2010 antoine luciani
** Last update Fri Mar 12 14:16:29 2010 antoine luciani
*/

/*
** n^(i) = n * n^(i - 1)
*/
int		my_power_rec(int nb, int power)
{
  int		result;

  if (power < 0)
    return (0);
  if (power == 0)
    return (1);
  result = nb * my_power_rec(nb, power - 1);
  return (result);
}
