/*
** my_strlowcase.c for my_strlowcase in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 16:25:03 2010 antoine luciani
** Last update Mon Mar 15 16:27:20 2010 antoine luciani
*/

char		*my_strlowcase(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = 'a' + str[i] - 'A';
      i += 1;
    }
  return (str);
}
