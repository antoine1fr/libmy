/*
** my_memset.c for my_memset in /u/all/lucian_b/cu/util/c/my/trunk/src
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 26 13:18:25 2010 antoine luciani
** Last update Fri Mar 26 13:20:52 2010 antoine luciani
*/

void		my_memset(void *ptr, int value, int size)
{
  char		*current;
  int		i;

  i = 0;
  current = (char *)ptr;
  while (i < size)
    {
      current[i] = value;
      i += 1;
    }
}
