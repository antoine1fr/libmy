/*
** my_strstr.c for my_strstr in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 11:33:49 2010 antoine luciani
** Last update Mon Mar 15 14:47:22 2010 antoine luciani
*/

char		*my_strstr(char *str, char *to_find)
{
  int		i;
  int		j;
  int		found;

  if (to_find[0] == '\0')
    return (str);
  j = 0;
  found = 0;
  while (str[j] != '\0')
    {
      i = 0;
      while (to_find[i] == str[i + j])
	{
	  if (to_find[i] != '\0' && to_find[i + 1] == '\0')
	    return (&str[j]);
	  else if (str[j] == '\0')
	    return 0;
	  i += 1;
	}
      j += 1;
    }
  return (0);
}
