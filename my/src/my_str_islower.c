/*
** my_str_islower.c for my_str_islower in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 17:39:16 2010 antoine luciani
** Last update Tue Jun  1 14:23:52 2010 antoine luciani
*/

int		my_str_islower(const char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'a' || str[i] > 'z')
	return (0);
      i += 1;
    }
  return (1);
}
