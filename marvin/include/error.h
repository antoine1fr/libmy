/*
** error.h for marvin in /u/all/lucian_b/cu/work/rushs/marvin
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun Apr 25 22:41:43 2010 antoine luciani
** Last update Sun Apr 25 22:41:55 2010 antoine luciani
*/

typedef enum	e_error_type
  {
    ER_TYPE_MISSING_NAME,
    ER_TYPE_MISSING_TYPE
  }		t_error_type;

typedef struct	s_error
{
  t_error_type	type;
  int		char_num;
  char		*value;
}		t_error;
