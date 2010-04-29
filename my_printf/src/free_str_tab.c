#include <stdlib.h>

char		**free_str_tab(char **tab)
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
