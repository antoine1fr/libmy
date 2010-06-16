/*
** msh_print_error.c for minishell1 in /u/all/lucian_b/cu/work/projects/projects.git/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun 16 14:12:17 2010 antoine luciani
** Last update Wed Jun 16 14:22:27 2010 antoine luciani
*/

#include "my.h"
#include "minishell1.h"

void		msh_print_error(const char *command, t_error err_code)
{
  if (err_code == ERROR_COMMAND_NOT_FOUND)
  {
    my_puterr(command);
    my_puterr(" : Command not found.\n");
  }
  else if (err_code == ERROR_UNKNOWN_VAR)
    my_puterr("Undefined variable.\n");
}
