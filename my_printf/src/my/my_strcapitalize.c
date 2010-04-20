/*
** my_strcapitalize.c for my_strcapitalize in /u/all/lucian_b/cu/work/Jour_06
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon Mar 15 16:41:26 2010 antoine luciani
** Last update Mon Mar 15 17:08:55 2010 antoine luciani
*/

char		char_to_low(char c)
{
  if (c >= 'A' && c <= 'Z')
    return ('a' + c - 'A');
  else
    return (c);
}

char		char_to_up(char c)
{
  if (c >= 'a' && c <= 'z')
    return ('A' + c - 'a');
  else
    return (c);
}

int		is_word_char(char c)
{
  if ((c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z') ||
      (c >= '0' && c <= '9'))
    return (1);
  else
    return (0);
}

char		*my_strcapitalize(char *str)
{
  int		i;
  int		first_letter;
  int		word;

  i = 0;
  first_letter = 0;
  word = 0;
  while (str[i] != '\0')
    {
      if (!word && is_word_char(str[i]))
	{
	  word = 1;
	  str[i] = char_to_up(str[i]);
	}
      else if (word && is_word_char(str[i]))
	  str[i] = char_to_low(str[i]);
      else
	word = 0;
      i += 1;
    }
  return (str);
}
