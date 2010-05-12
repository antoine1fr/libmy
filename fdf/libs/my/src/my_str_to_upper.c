#include "my.h"

void		my_str_to_upper(char *str)
{
  if (!str)
    return;
  while (*str != 0)
    {
      if (*str >= 'a' && *str <= 'z')
	*str = *str - 'a' + 'A';
      str += 1;
    }
}
