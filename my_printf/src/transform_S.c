#include <stdarg.h>
#include <stdlib.h>

#include "my.h"
#include "request.h"

#define IS_PRINTABLE(x) ((x) >= 32 && (x) <= 126)
#define OCTAL_BASE "01234567"

int	count_nonprint_char(char *str)
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

char	**create_str_tab(char *str)
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

char	**free_str_tab(char **tab)
{
  int		i;

  if (!tab)
    return (0);
  i = 0;
  while (tab[i] != 0)
    free(tab[i++]);
  free(tab);
  return (0);
}

int	count_fin_char(char *str, char **tab)
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
      count += my_strlen(tab[i]) + 1;
      i += 1;
    }
  return (count);
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
	  final_str[i++] = '\\';
	  my_strcpy(&final_str[i], tab[j]);
	  i += my_strlen(tab[j++]);
	}
      str += 1;
    }
  final_str[i] = 0;
  tab = free_str_tab(tab);
  return (final_str);
}
