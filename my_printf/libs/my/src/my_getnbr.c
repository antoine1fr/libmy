/*
** my_getnbr.c for my_getnbr in /u/all/lucian_b/cu/test/Jour_04
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Mar 11 11:51:55 2010 antoine luciani
** Last update Thu Mar 11 17:23:47 2010 antoine luciani
*/

char		my_get_sign(char *str)
{
  int		i;
  int		minus_count;
  
  i = 0;
  minus_count = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	minus_count = minus_count + 1;
      i = i + 1;
    }
  if ((minus_count % 2) != 0)
    return ('-');
  else
    return ('+');
}

int		my_comp_end_off(char *str)
{
  int		i;
  int		offset;
  
  i = 0;
  offset = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      i = i + 1;
    }
  return (offset + 1);
}

int		my_comp_beg_off(char *str)
{
  int		i;

  i = 0;
  while (str[i] == '+' || str[i] == '-')
    {
	i = i + 1;
    }
  return (i);
}

int		my_getnbr(char *str)
{
  int		n;
  char		*p1;

  n = 0;
  p1 = str + my_comp_beg_off(str);
  while ((*p1 >= '0' && *p1 <= '9') && *p1 != '\0')
    {
      n = (n + (*p1) - '0') * 10;
      p1 = p1 + 1;
    }
  n = n / 10;
  if (my_get_sign(str) == '-')
    n = -n;
  return (n);
}
