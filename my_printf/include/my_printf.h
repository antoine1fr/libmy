/*
** my_printf.h for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 21 10:03:01 2010 antoine luciani
** Last update Wed Apr 21 10:48:38 2010 antoine luciani
*/

#ifndef _MY_PRINTF_H_
# define _MY_PRINTF_H_

#include "request.h"
#include "transformations.h"

typedef void	(*t_trans_func) (t_request *request, t_arg *arg);

typedef struct		s_transformation
{
  t_trans_func		launch;
  char			specifier;
}			t_transformation;

void	my_printf(char *fmt, ...);

#endif /* !_MY_PRINTF_H_ */
