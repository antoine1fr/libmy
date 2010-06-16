/*
** msh_exit_command.c for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 13:11:16 2010 antoine luciani
** Last update Wed Jun 16 15:07:26 2010 antoine luciani
*/

#include "minishell1.h"

extern t_msh_bool gl_b_quit_app;

t_error		msh_exit_command(char UNUSED **argv)
{
  gl_b_quit_app = MSH_TRUE;
  return (ERROR_NONE);
}
