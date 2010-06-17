/*
** my_strupcase.c for my_strupcase in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 16:15:17 2010 antoine luciani
** Last update Mon Mar 15 16:21:23 2010 antoine luciani
*/

char		*my_strupcase(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = 'A' + str[i] - 'a';
      i += 1;
    }
  return (str);
}
