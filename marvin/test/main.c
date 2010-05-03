#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "test.h"

t_test_err	test_parsing();

t_test	gl_test_tab[] = {
  {"test-parsing", test_parsing},
  {0, 0}
};

static void	handle_test_error(t_test_err error)
{
}

int		launch_test(char *id)
{
  int		i;
  t_test_err	error;

  i = 0;
  while (gl_test_tab[i].id != 0)
    {
      if (strcmp(gl_test_tab[i].id, id) == 0)
	{
	  error = gl_test_tab[i].f();
	  handle_test_error(error);
	  return (0);
	}
      i += 1;
    }
  return (1);
}

int		main(int argc, char **argv)
{
  if (argc != 2)
    {
      printf("Usage : ./test test_num\n");
      return (EXIT_FAILURE);
    }
  if (launch_test(argv[1]))
    {
      printf("Test(s) failed!\n");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
