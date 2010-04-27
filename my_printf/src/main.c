#include "my_printf.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
  if (argc != 2)
    return (EXIT_FAILURE);
  my_printf(argv[1], "\tAntoine\n");
  return (EXIT_SUCCESS);
}
