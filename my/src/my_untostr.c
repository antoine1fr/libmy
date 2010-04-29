/*
** my_untostr.c for libmy in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Apr 26 12:18:22 2010 antoine luciani
** Last update Thu Apr 29 17:42:42 2010 antoine luciani
*/

#include "my.h"

static int	count_digits(unsigned int n, int base)
{
  int		count;

  if (n == 0)
    return (1);
  count = 0;
  while (n != 0)
    {
      n = n / base;
      count += 1;
    }
  return (count);
}

static char	*my_untostr_sub(char *str, int index, unsigned int n, char *base)
{
  int		base_len;

  if (index < 0)
    return (str);
  base_len = my_strlen(base);
  str[index] = base[n % base_len];
  my_untostr_sub(str, index - 1, n / base_len, base);
  return (str);
}

char		*my_ntostr(int n, char *base)
{
  char		*str;
  int		digit_count;
  int		base_len;
  int		len;
  int		jump;

  jump = (n < 0) ? 1 : 0;
  base_len = my_strlen(base);
  digit_count = count_digits(n, base_len);
  len = sizeof(*str) * (digit_count + jump);
  if (len <= 0)
    return (0);
  str = xmalloc(len);
  my_memset(str, 0, len);
  my_untostr_sub(str + jump, len - (1 + jump), n, base);
  if (n < 0)
    str[0] = '-';
  str[digit_count] = 0;
  return (str);
}

char		*my_untostr(unsigned int n, char *base)
{
  char		*str;
  int		digit_count;
  int		base_len;
  int		len;

  base_len = my_strlen(base);
  digit_count = count_digits(n, base_len);
  len = sizeof(*str) * digit_count;
  if (len <= 0)
    return (0);
  str = xmalloc(len);
  my_memset(str, 0, len);
  my_untostr_sub(str, len - 1, n, base);
  str[digit_count] = 0;
  return (str);
}
