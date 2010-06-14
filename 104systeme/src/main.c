/*
** main.c for 104systeme in /u/all/lucian_b/cu/work/projects/104systeme/src
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 02:12:53 2010 antoine luciani
** Last update Sun Jun  6 23:41:30 2010 antoine luciani
*/

#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdio.h>

typedef enum	e_error
  {
    ERROR_NONE,
    ERROR_ARG_NUM
  }		t_error;

t_error		option1(int argc, char **argv)
{
  float		x;
  float		y;
  float		alpha;
  float		radius;

  if (argc != 4)
    return (ERROR_ARG_NUM);
  x = atof(argv[2]);
  y = atof(argv[3]); radius = sqrtf((x *x) + (y * y));
  alpha = acosf(x / radius);
  alpha = (y < 0) ? (M_PI * 2.f) - alpha : alpha;
  printf("Rayon r = %.3f\nArgument theta = %.0f\n",
	 radius, alpha * 180.f / M_PI);
  return (ERROR_NONE);
}

t_error		option2(int argc, char **argv)
{
  float		radius;
  float		alpha;
  float		x;
  float		y;

  if (argc != 4)
    return (ERROR_ARG_NUM);
  radius = atof(argv[2]);
  alpha = (atoi(argv[3]) * M_PI) / 180.f;
  x = radius * cosf(alpha);
  y = radius * sinf(alpha);
  printf("x = %.3f\ny = %.3f\n", x, y);
  return (ERROR_NONE);
}

t_error		option3(int argc, char **argv)
{
  float		x;
  float		y;
  float		z;
  float		alpha;
  float		theta;
  float		radius;
  int		a;
  int		b;

  if (argc != 5)
    return (ERROR_ARG_NUM);
  x = atof(argv[2]);
  y = atof(argv[3]);
  z = atof(argv[4]);
  radius = sqrtf((x * x) + (y * y) + (z * z));
  alpha = asinf(z / radius);
  theta = acosf(x / (radius * cosf(alpha)));
  alpha = (alpha * 180.f) / M_PI;
  theta = ((theta * 180.f) / M_PI);
  b = (int)alpha;
  a = (int)theta;
  printf("Rayon rho = %.3f\n", radius);
  printf("Argument theta = %d\n", a);
  printf("Argument phi = %d\n", b);
  return (ERROR_NONE);
}

int		main(int argc, char **argv)
{
  option3(argc, argv);
  return (EXIT_SUCCESS);
}
