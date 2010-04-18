/*
** main.c for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Apr 15 15:48:50 2010 antoine luciani
** Last update Sun Apr 18 17:42:05 2010 antoine luciani
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "vector_n.h"
#include "options.h"

typedef struct	s_option
{
  int		n;
  void		(*f)(int arg_count, char **arg_tab);
}		t_option;

t_option	gl_options[] = {
  {1, option1},
  {2, option2},
  {0, 0}
};

static int	launch(int argc, char **argv)
{
  int		op_num;
  int		i;

  i = 0;
  op_num = atoi(argv[1]);
  while (gl_options[i].n != 0)
    {
      if (gl_options[i].n == op_num)
	{
	  gl_options[i].f(argc, argv);
	  return (0);
	}
      i += 1;
    }
  return (1);
}

int		main(int argc, char **argv)
{
  if (argc < 3)
    {
      printf("Usage: 101vecteur option [arg1 [arg2 [...]]]\n");
      return (EXIT_FAILURE);
    }
  srand(time(0));
  if (launch(argc, argv))
    {
      printf("ERROR: incorrect option number!\n");
      return (EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
