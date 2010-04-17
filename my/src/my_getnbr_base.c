/*
** my_getnbr_base.c for my_getnbr_base in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 23:24:36 2010 antoine luciani
** Last update Tue Mar 16 10:41:38 2010 antoine luciani
*/

int		is_valid_digit(char c, char *base)
{
  int		i;

  i = 0;
  while (base[i] != '\0')
    {
      if (c == base[i])
	return (1);
      i += 1;
    }
  return (0);
}

char		*find_first_digit(char *str, char *base)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_valid_digit(str[i], base))
	  return (&str[i]);
      i += 1;
    }
  return (0);
}

int		get_digit_weight(char c, char *base)
{
  int		i;

  i = 0;
  while (base[i] != '\0')
    {
      if (base[i] == c)
	return (i);
      i += 1;
    }
  return (-1);
}

int		my_strlen(char *str)
{
  int		len;

  len = 0;
  while (str[len] != '\0')
    len += 1;
  return (len);
}

int		my_getnbr_base(char *str, char *base)
{
  char		*start;
  int		result;
  int		len;
  int		i;

  if (str[0] == '\0' || base[0] == '\0')
    return (0);
  start = find_first_digit(str, base);
  result = get_digit_weight(*start, base);
  start += 1;
  len = my_strlen(base);
  i = 0;
  while (start[i] != '\0')
    {
      result = result * len + get_digit_weight(start[i], base);
      i += 1;
    }
  if (str[0] == '-')
    result = -result;
  return (result);
}
