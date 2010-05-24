/*
** my_ls.h for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 23:42:03 2010 antoine luciani
** Last update Mon May 24 23:42:05 2010 antoine luciani
*/

#ifndef MY_LS_H_
# define MY_LS_H_

# define ERROR_NONE 0
# define ERROR_BAD_PATH 1
# define ERROR_CLOSE_FILE 2
# define ERROR_BAD_PARAM 3

# define MLS_FALSE 0
# define MLS_TRUE 1

# define MLS_FLAG_HIDDEN 0x01
# define MLS_FLAG_DESC 0x02
# define MLS_FLAG_DETAILS 0x04
# define MLS_FLAG_BY_TIME 0x08

typedef char	t_bool;
typedef char	t_error;

typedef struct	s_mls_element
{
  struct dirent	*dirent_ptr;
  struct stat	*stat_ptr;
}		t_mls_element;

/*
** Reads the content of a directory.
*/
t_error	mls_read_dir(const char *path, char flags,
		     t_btree *elt_tree, t_list *dir_list);

/*
** Processes an element of a directory.
** The element is added to elt_dir.
** If this element is a directory, then it is also
** added to dir_list for a future printing.
*/
t_bool	mls_process_element(DIR *dir_ptr, const char *root,
			    char flags, t_btree *elt_tree,
			    t_list *dir_list);

#endif /* !MY_LS_H_ */
