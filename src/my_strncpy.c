/*
** my_strncpy.c for my_strncpy in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 10:46:42 2010 antoine luciani
** Last update Tue Jun  1 14:23:11 2010 antoine luciani
*/

char		*my_strncpy(char *dest, const char *src, int n)
{
  int		i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i += 1;
    }
  while (i < n)
    {
      dest[i] = 0;
      i += 1;
    }
  return (dest);
}
