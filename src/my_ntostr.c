/*
** my_untostr.c for libmy in /u/all/lucian_b/cu/util/c/my
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Apr 26 12:18:22 2010 antoine luciani
** Last update Thu Apr 29 19:34:48 2010 antoine luciani
*/

#include "my.h"

int	count_nbr_digits(int n, int base);
int	count_unbr_digits(unsigned int n, int base);

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

static char	*my_ntostr_sub(char *str, int index, int n, char *base)
{
  int		base_len;
  int		coef;

  if (index < 0)
    return (str);
  coef = (n < 0) ? -1 : 1;
  base_len = my_strlen(base);
  str[index] = base[coef * (n % base_len)];
  my_ntostr_sub(str, index - 1, n / base_len, base);
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
  digit_count = count_nbr_digits(n, base_len);
  len = sizeof(*str) * (digit_count + jump + 1);
  if (len <= 0)
    return (0);
  str = xmalloc(len);
  my_memset(str, 0, len);
  my_ntostr_sub(str + jump, digit_count - 1, n, base);
  if (n < 0)
    str[0] = '-';
  str[digit_count + jump] = 0;
  return (str);
}

char		*my_untostr(unsigned int n, char *base)
{
  char		*str;
  int		digit_count;
  int		base_len;
  int		len;

  base_len = my_strlen(base);
  digit_count = count_unbr_digits(n, base_len);
  len = sizeof(*str) * (digit_count + 1);
  if (len <= 0)
    return (0);
  str = xmalloc(len);
  my_memset(str, 0, len);
  my_untostr_sub(str, digit_count - 1, n, base);
  str[digit_count] = 0;
  return (str);
}
