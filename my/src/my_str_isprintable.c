/*
** my_str_isprintable.c for my_str_isprintable in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 17:54:52 2010 antoine luciani
** Last update Tue Jun  1 14:24:19 2010 antoine luciani
*/

int		my_str_isprintable(const char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	return (0);
      i += 1;
    }
  return (1);
}
