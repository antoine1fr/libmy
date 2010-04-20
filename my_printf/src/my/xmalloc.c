/*
** xmalloc.c for libmy in /u/all/lucian_b/cu/work/bistro/libs/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Mar 30 11:17:43 2010 antoine luciani
** Last update Tue Mar 30 11:20:29 2010 antoine luciani
*/

#include <stdlib.h>

/*
** Malloc wich exit the program if the alloction fails.
*/
void		*xmalloc(int size)
{
  void		*ptr;

  ptr = malloc(size);
  if (!ptr)
    exit(EXIT_FAILURE);
  return (ptr);
}
