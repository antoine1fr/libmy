#include "my_printf.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
  my_printf("Je m'appelle %s et j'ai %d ans.\n", "Antoine", 42);
  return (EXIT_SUCCESS);
}