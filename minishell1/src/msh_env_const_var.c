/*
** msh_env_const_var.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Thu Jun  3 09:57:13 2010 antoine luciani
** Last update Fri Jun  4 13:05:41 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"
#include "msh_environment.h"

char		*msh_env_const_var(const char *key, const char *value)
{
  int		key_len;
  int		var_len;
  int		value_len;
  char		*var;

  key_len = my_strlen(key);
  value_len = my_strlen(value);
  var_len = key_len + value_len + 1;
  var = xmalloc(sizeof(*var) * (var_len + 1));
  my_strncpy(var, key, key_len);
  my_strncpy(var + key_len, "=", 1);
  my_strcpy(var + key_len + 1, value);
  var[var_len] = 0;
  return (var);
}
