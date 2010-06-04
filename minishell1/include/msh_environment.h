/*
** msh_environment.h for minishell1 in /u/all/lucian_b/cu/work/projects/minishell1
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Wed Jun  2 15:05:00 2010 antoine luciani
** Last update Fri Jun  4 15:34:21 2010 antoine luciani
*/

#ifndef MSH_ENVIRONMENT_H_
# define MSH_ENVIRONMENT_H_

# define MSH_ENV_DEFAULT_SIZE 10

typedef struct	s_msh_env
{
  char		**array;
  int		size;
  int		used;
}		t_msh_env;

/*
** Initializes an environment.
** If size < 1, MSH_ENV_DEFAULT_SIZE is taken.
*/
void		msh_env_init(t_msh_env *envp, int size);

/*
** Appends an variable to the environment.
*/
void		msh_env_append(const char *key, const char *value,
			       t_msh_env *envp);

/*
** Returns the index of the variable of key 'key' in an
** environment pointed by 'envp'. If the variable isn't
** found -1 is returned.
*/
int		msh_env_get_var_index(const char *key, t_msh_env *envp);

/*
** Adds MSH_ENV_DEFAULT_SIZE elements to an environment.
*/
void		msh_env_resize(t_msh_env *env_ptr);

/*
** Copies the content of an array at the end of an
** environment.
*/
void		msh_env_fill_from_array(t_msh_env *envp, char **array);

/*
** Constructs an environment variable.
*/
char		*msh_env_const_var(const char *key, const char *value);

/*
** Cleans en environment.
*/
void		msh_env_clean(t_msh_env *envp);

/*
** Removes an environment's variable.
*/
t_error		msh_env_remove(const char *key, t_msh_env *envp);

/*
** Returns the value of an environment's variable of key 'key'.
** The returned value is freed automatically.
*/
const char	*msh_env_get_value_from_key(const char *key);

#endif /* !MSH_ENVIRONMENT_H_ */
