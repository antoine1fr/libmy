/*
** minishell1.h for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 16:55:55 2010 antoine luciani
** Last update Tue Jun  1 16:58:50 2010 antoine luciani
*/

#ifndef MINISHELL1_H_
# define MINISHELL1_H_

/*
** Finds the index of the folder's path in which the file file_name is.
*/
int	msh_find_valid_path(const char *file_name, char **path_array);

/*
** Constructs the full path of the file.
*/
char	*msh_construct_full_path(const char *file_name, const char *path);

#endif /* !MINISHELL1_H_ */
