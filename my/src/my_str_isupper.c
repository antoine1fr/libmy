/*
** my_str_isupper.c for my_str_isupper in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 17:49:03 2010 antoine luciani
** Last update Tue Jun  1 14:24:32 2010 antoine luciani
*/

int		my_str_isupper(const char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 'A' || str[i] > 'Z')
	return (0);
      i += 1;
    }
  return (1);
}
