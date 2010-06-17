/*
** minishell1.h for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Tue Jun  1 16:55:55 2010 antoine luciani
** Last update Thu Jun 17 14:17:09 2010 antoine luciani
*/

#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# define UNUSED __attribute__((unused))

typedef enum	e_error
  {
    ERROR_NONE,
    ERROR_COMMAND_NOT_FOUND,
    ERROR_UNKNOWN_VAR,
    ERROR_BAD_PARAM,
    ERROR_UNKNOWN_FILE,
    ERROR_NOT_A_BUILTIN,
    ERROR_EXIT_FAILURE,
    ERROR_TOO_FEW_ARGS,
    ERROR_TOO_MANY_ARGS
  }		t_error;

/*
** Definition of a builtin command.
*/
typedef struct	s_builtin
{
  char		*name;
  t_error	(*exec) (char **argv);
}		t_builtin;

/*
** Definition of a boolean.
*/
typedef enum	e_msh_bool
  {
    MSH_FALSE,
    MSH_TRUE
  }		t_msh_bool;

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
const char	*msh_get_env_path(char * const env[]);

/*
** Returns the path of the directory in which a "command" is.
** Note : the returned string isn't automaticaly freed.
*/
char		*msh_get_command_path(const char *command, char * const env[]);

/*
** Launches a command.
*/
t_error		msh_launch_command(char **arg_array,
				   char * const envp[]);

/*
** Launches a builtin command, if it exists.
*/
t_error		msh_launch_builtin(char **arg_array);

/*
** Exits the shell.
*/
t_error		msh_exit_command(char **argv);

/*
** Prints the environment.
*/
t_error		msh_env_command(char **argv);

/*
** Adds a variable into the environment.
*/
t_error		msh_setenv_command(char **argv);

/*
** Remove a variable from the environment.
*/
t_error		msh_unsetenv_command(char **argv);

/*
** Implementation of the 'cd' builtin.
*/
t_error		msh_cd_command(char **argv);

/*
** Tests the msh_env_get_var_index function.
*/
t_error		msh_testenv_getvarindex(char **argv);

/*
** Prints human-readable errors.
*/
void		msh_print_error(char **argv, t_error err_code);

#endif /* !MINISHELL1_H_ */
