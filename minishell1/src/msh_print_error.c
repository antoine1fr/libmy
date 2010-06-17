/*
** msh_print_error.c for minishell1 in /u/all/lucian_b/cu/work/projects/projects.git/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun 16 14:12:17 2010 antoine luciani
** Last update Thu Jun 17 14:32:02 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

#define MSH_PRINT_ERROR(x, y) my_puterr(x);	\
 my_puterr(y)

void		msh_print_error(char **argv, t_error err_code)
{
  if (err_code == ERROR_COMMAND_NOT_FOUND)
  {
    MSH_PRINT_ERROR(argv[0], " : Command not found.\n");
  }
  else if (err_code == ERROR_UNKNOWN_VAR)
  {
    MSH_PRINT_ERROR(argv[1], " : Undefined variable.\n");
  }
  else if (err_code == ERROR_TOO_FEW_ARGS)
  {
    MSH_PRINT_ERROR(argv[0], " : Too few arguments.\n");
  }
  else if (err_code == ERROR_UNKNOWN_FILE)
  {
    MSH_PRINT_ERROR(argv[1], " : No such file or directory.\n");
  }
  else if (err_code == ERROR_TOO_MANY_ARGS)
  {
    MSH_PRINT_ERROR(argv[0], " : Too many arguments.\n");
  }
}
