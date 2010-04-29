#include <stdarg.h>
#include <stdlib.h>

#include "my.h"
#include "request.h"

#define IS_PRINTABLE(x) ((x) >= 32 && (x) <= 126)
#define OCTAL_BASE "01234567"

char	**free_str_tab(char **tab);

static int	count_nonprint_char(char *str)
{
  int		count;

  count = 0;
  while (*str != 0)
    {
      if (!IS_PRINTABLE(*str))
	count += 1;
      str += 1;
    }
  return (count);
}

static char	**create_str_tab(char *str)
{
  char		**tab;
  int		size;
  int		i;

  size = count_nonprint_char(str);
  if (size == 0)
    return (0);
  tab = xmalloc(sizeof(*tab) * (size + 1));
  i = 0;
  while (*str != 0)
    {
      if (!IS_PRINTABLE(*str))
	  tab[i++] = my_untostr(*str, OCTAL_BASE);
      str += 1;
    }
  tab[i] = 0;
  return (tab);
}

static int	count_fin_char(char *str, char **tab)
{
  int		count;
  int		i;

  count = 0;
  while (*str != 0)
    {
      if (IS_PRINTABLE(*str))
	count += 1;
      str += 1;
    }
  if (!tab)
    return (count);
  i = 0;
  while (tab[i] == 0)
    {
      count += 4;
      i += 1;
    }
  return (count);
}

static void		copy_oct_value(char *str, char *value)
{
  int		len;
  int		i;

  len = my_strlen(value);
  *str++ = '\\';
  i = 0;
  while (i < 3 - len)
    str[i++] = '0';
  str += i;
  my_strcpy(str, value);
}

char		*transform_S(t_request *request, va_list *ap)
{
  char		**tab;
  char		*str;
  char		*final_str;
  int		i;
  int		j;

  str = va_arg(*ap, char *);
  tab = create_str_tab(str);
  final_str = xmalloc(sizeof(*final_str) * (count_fin_char(str, tab) + 1));
  i = 0;
  j = 0;
  while (*str != 0)
    {
      if (IS_PRINTABLE(*str))
	final_str[i++] = *str;
      else
	{
	  copy_oct_value(&final_str[i], tab[j++]);
	  i += 4;
	}
      str += 1;
    }
  final_str[i] = 0;
  tab = free_str_tab(tab);
  return (final_str);
}
