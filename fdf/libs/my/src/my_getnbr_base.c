/*
** my_getnbr_base.c for my_getnbr_base in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 23:24:36 2010 antoine luciani
** Last update Tue Mar 16 10:41:38 2010 antoine luciani
*/

#include "my.h"

static int	is_valid_digit(char c, char *base)
{
  int		i;

  i = 0;
  while (base[i] != '\0')
    {
      /*
	if (base[i] >= 'a' && base[i] <= 'z')
	{
	lower = base[i];
	upper = base[i] - 'a' + 'A';
	}
	else if (base[i] >= 'A' && base[i] <= 'Z')
	{
	lower = base[i] - 'A' + 'a';
	upper = base[i];
	}
      */
      if (c == base[i])
	return (1);
      i += 1;
    }
  return (0);
}

static char	*find_first_digit(char *str, char *base)
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

static int	get_digit_weight(char c, char *base)
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

int		my_getnbr_base(char *str, char *base)
{
  char		*start;
  int		result;
  int		len;
  int		i;

  if (str[0] == '\0' || base[0] == '\0')
    return (0);
  my_str_to_upper(str);
  my_str_to_upper(base);
  start = find_first_digit(str, base);
  result = get_digit_weight(*start, base);
  start += 1;
  len = my_strlen(base);
  i = 0;
  while (start[i] != '\0' && is_valid_digit(start[i], base))
    {
      result = result * len + get_digit_weight(start[i], base);
      i += 1;
    }
  if (str[0] == '-')
    result = -result;
  return (result);
}
