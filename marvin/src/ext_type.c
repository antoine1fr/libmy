/*
** ext_type.c for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:38:45 2010 antoine luciani
** Last update Sun Apr 25 22:38:46 2010 antoine luciani
*/

#include "my.h"
#include "token.h"

char	*gl_types_tab[] = {
  "int",
  "char",
  "float",
  "double",
  0
};

int		ext_type_base(char *str, t_list *list)
{
  int			i;
  int			len;
  char			*tmp;

  i = 0;
  while (gl_types_tab[i] != 0)
    {
      len = my_strlen(gl_types_tab[i]);
      if (my_strncmp(gl_types_tab[i], str, len) == 0)
	{
	  tmp = my_strndup(gl_types_tab[i], len);
	  list_push_data(list, tmp);
	  return (len);
	}
      i += 1;
    }
  return (0);
}

char	*ext_type_ptr(char *str, t_list *list)
{
  int		i;
  char		*star_end;

  star_end = 0;
  while (*str != 0 && *str != ',' && *str != ')')
    {
      if (*str == '*')
	  list_push_data(list, 0);
      else if (IS_VALID_CHAR(str[1]) && str[0] == ' ')
	  star_end = str + 1;
      else if (*str == '[')
	{
	  list_push_data(list, 0);
	  i = 0;
	  while (str[i] != ']' && str[i] != 0)
	    i += 1;
	  if (str[i] == 0)
	    return (star_end);
	}
      str += 1;
    }
  return (star_end);
}

/*
** type = type_base ****blabla[]
*/
int		ext_type(char *str, t_list *list)
{
  int		jump;
  char		*res;
  t_token	*token;
  t_list	*type_list;

  type_list = xmalloc(sizeof(*type_list));
  list_init(type_list);
  ext_type_base(str, type_list);
  res = ext_type_ptr(str, type_list);
  jump =  res - str;
  if (jump == -1 || !res)
    return (0);
  token = xmalloc(sizeof(*token));
  token->value = type_list;
  token->type = TOK_TYPE_TYPE;
  list_append_data(list, token);
  return (jump);
}
