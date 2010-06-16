/*
** my_strncmp.c for my_strncmp in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 15:33:15 2010 antoine luciani
** Last update Tue Jun  1 14:21:01 2010 antoine luciani
*/

int		my_strncmp(const char *s1, const char *s2, int n)
{
  int		i;
  int		result;

  i = 0;
  result = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i += 1;
    }
  if (i < n)
    result = s1[i] - s2[i];
  else
    result = 0;
  return (result);
}
