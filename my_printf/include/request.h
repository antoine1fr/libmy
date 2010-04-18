/*
** request.h for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Apr 14 14:17:13 2010 antoine luciani
** Last update Sun Apr 18 13:56:37 2010 antoine luciani
*/

#ifndef REQUEST_H
# define REQUEST_H

# define MY_PRINTF_BULLET -1
# define MY_PRINTF_NOT_SET 0

/*
** Implementation of a printf request.
** %[flags][width][.precision][length]specifier
*/
typedef struct		s_request
{
  char			flag;
  int			width;
  int			precision;
  char			length[2];
  char			specifier;
}			t_request;

/*
** Parses a string request.
**
** @param str : a string wich begins by a printf request
** @param request : pointer to the t_request where the result will be
** stored
** @return if an error occured NULL, the address of the character
** next to the request otherwise
*/
char	*parse_request(char *str, t_request *request);

#endif /* REQUEST_H */
