/*
** syntaxe_checker.c for bistro in /u/all/radix_r/cu/work/bistro
** 
** Made by remy radix
** Login   <radix_r@epitech.net>
** 
** Started on  Wed Apr  7 18:19:27 2010 remy radix
** Last update Wed Apr  7 18:21:52 2010 remy radix
*/

#include "exp_desc.h"
#include "bistromathique.h"
#include "parser.h"

static int	is_bracket(char c, char *ops)
{
  if (c == ops[OP_OPEN_PARENT_IDX])
    return (1);
  if (c == ops[OP_CLOSE_PARENT_IDX])
    return (-1);
  return (0);
}

static char	is_op(char c, char *ops)
{
  int		i;

  i = 0;
  while (ops[i])
    {
      if (ops[i++] == c)
	return (c);
    }
  return (0);
}

static int	is_pos_num(char c, char *base)
{
  int		i;

  i = 1;
  while (base[i])
    {
      if (c == base[i++])
	return (1);
    }
  return (0);
}

int		syntaxe_check(char *s, t_exp_desc exp_desc)
{
  int		i;
  char		last;
  int		bracket_count;

  i = 0;
  bracket_count = 0;
  last = 0;
  while (s[i])
    {
      bracket_count += is_bracket(s[i], exp_desc.ops);
      if (is_pos_num(s[i], exp_desc.base))
	  last = 0;
      else if (is_op(s[i], exp_desc.ops))
	last = s[i];
      if (s[i] == exp_desc.base[0] &&
	  (last == exp_desc.ops[OP_DIV_IDX] ||
	   last == exp_desc.ops[OP_MOD_IDX]))
	return (0);
      i += 1;
    }
  return (!bracket_count);
}
