/*
** msh_print_error.c for minishell1 in /u/all/lucian_b/cu/work/projects/projects.git/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun 16 14:12:17 2010 antoine luciani
** Last update Wed Jun 16 15:47:15 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

void		msh_print_error(char **argv, t_error err_code)
{
  if (err_code == ERROR_COMMAND_NOT_FOUND)
  {
    my_puterr(argv[0]);
    my_puterr(" : Command not found.\n");
  }
  else if (err_code == ERROR_UNKNOWN_VAR)
  {
    my_puterr(argv[1]);
    my_puterr(" : Undefined variable.\n");
  }
  else if (err_code == ERROR_BAD_PARAM)
  {
    my_puterr(argv[1]);
    my_puterr(" : Too few arguments.\n");
  }
  else if (err_code == ERROR_UNKNOWN_FILE)
  {
    my_puterr(argv[1]);
    my_puterr(" : No such file or directory.\n");
  }
}
