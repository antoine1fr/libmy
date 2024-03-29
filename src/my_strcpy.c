/*
** my_strcpy.c for my_strcpy in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 09:31:49 2010 antoine luciani
** Last update Sat May 29 17:14:01 2010 antoine luciani
*/

char		*my_strcpy(char *dest, const char *src)
{
  char		*ptr;

  ptr = dest;
  while (*src != 0)
    *ptr++ = *src++;
  *ptr = 0;
  return (dest);
}
