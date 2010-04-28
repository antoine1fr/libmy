#include "my_printf.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
  my_printf("Je m'appelle %s et j'ai %b en binaire!\n",
	    "Antoine", 20);
  return (EXIT_SUCCESS);
}
