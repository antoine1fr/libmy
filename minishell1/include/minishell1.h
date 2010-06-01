/*
** minishell1.h for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 16:55:55 2010 antoine luciani
** Last update Tue Jun  1 17:57:02 2010 antoine luciani
*/

#ifndef MINISHELL1_H_
# define MINISHELL1_H_

typedef enum	e_error
  {
    ERROR_NONE,
    ERROR_COMMAND_NOT_FOUND
  }		t_error;

/*
** Finds the index of the folder's path in which the file file_name is.
*/
int		msh_find_valid_path(const char *file_name, char **path_array);

/*
** Constructs the full path of the file.
*/
char		*msh_construct_full_path(const char *file_name, const char *path);

/*
** Returns the the PATH of the environment.
*/
const char	*msh_get_env_path(const char **env);

#endif /* !MINISHELL1_H_ */
