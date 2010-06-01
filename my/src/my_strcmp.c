/*
** my_strcmp.c for my_strcmp in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 14:49:51 2010 antoine luciani
** Last update Tue Jun  1 14:21:51 2010 antoine luciani
*/

int		my_strcmp(const char *s1, const char *s2)
{
  int		i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      i += 1;
    }
  if (s1[i] != '\0' && s2[i] == '\0')
    return (1);
  else if (s2[i] != '\0' && s1[i] == '\0')
    return (-1);
  return (0);
}
