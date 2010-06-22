/*
** my_strlen.c for my_strlen in /u/all/lucian_b/cu/test/Jour_04
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Mar 11 10:09:20 2010 antoine luciani
** Last update Tue Jun 22 12:47:04 2010 antoine luciani
*/

int		my_strlen(const char *str)
{
  int		length;

  length = 0;
  while ((str != 0) && (str[length] != '\0'))
    {
      length = length + 1;
    }
  return (length);
}
