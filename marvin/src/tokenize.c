/*
** tokenize.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:36:57 2010 antoine luciani
** Last update Sun Apr 25 22:36:59 2010 antoine luciani
*/

#include <stdio.h>

#include "token.h"
#include "my.h"

#define ER_STR_TYPE "ERROR : type is missing at character %d!\n"
#define ER_STR_NAME "ERROR : name is missing at character %d!\n"

int	ext_par_beg(char *str, t_list *list);
int	ext_par_end(char *str, t_list *list);
int	ext_type(char *str, t_list *list);
int	ext_type_ptr(char *str, t_list *list);
int	ext_name(char *str, t_list *list);

static int	tok_error(int jump, char *error, int i)
{
  if (!jump)
    {
      printf(error, i);
      return (0);
    }
  return (jump);
}

int		jump_spaces(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0 && (str[i] == ' ' || str[i] == ';'))
    i += 1;
  return (i);
}

/*
** '     int      a      ;      int b;'
*/
t_list		*tokenize(char *str)
{
  t_list	*list;
  int		i;
  int		jump;

  list = xmalloc(sizeof(*list));
  list_init(list);
  i = 0;
  i += jump_spaces(&str[i]);
  while(str[i] != 0)
    {
      if((jump = tok_error(ext_type(&str[i], list), ER_STR_TYPE, i)) == 0)
	return (0);
      i += jump + jump_spaces(&str[i]);
      if((jump = tok_error(ext_name(&str[i], list), ER_STR_NAME, i)) == 0)
	return (0);
      i += jump + jump_spaces(&str[i]);
      i += ext_par_beg(&str[i], list);
      i += ext_par_end(&str[i], list);
      i += jump_spaces(&str[i]);
    }
  return (list);
}
