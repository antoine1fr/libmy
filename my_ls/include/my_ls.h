/*
** my_ls.h for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Mon May 24 23:42:03 2010 antoine luciani
** Last update Sun May 30 22:26:01 2010 antoine luciani
*/

#ifndef MY_LS_H_
# define MY_LS_H_

# define ERROR_NONE 0
# define ERROR_BAD_PATH 1
# define ERROR_CLOSE_DIR 2
# define ERROR_BAD_PARAM 3

# define MLS_FALSE 0
# define MLS_TRUE 1

# define MLS_FLAG_UNKNOWN 0x00
# define MLS_FLAG_HIDDEN 0x01
# define MLS_FLAG_DESC 0x02
# define MLS_FLAG_DETAILS 0x04
# define MLS_FLAG_BY_TIME 0x08
# define MLS_FLAG_RECURSIVE 0x10

typedef char    t_bool;
typedef char    t_error;

typedef struct  s_mls_element
{
  struct dirent *dirent_ptr;
  struct stat   *stat_ptr;
}               t_mls_element;

/*
** Reads the content of a directory.
*/
t_error mls_read_dir(const char *path, char flags,
                     t_btree *elt_tree, t_list *dir_list);

/*
** Processes an element of a directory.
** The element is added to elt_dir.
** If this element is a directory, then it is also
** added to dir_list for a future printing.
*/
t_bool  mls_process_element(DIR *dir_ptr, const char *root,
                            char flags, t_btree *elt_tree,
                            t_list *dir_list);

/*
** Constructs a path from a root path and a relative path.
*/
char    *mls_construct_path(const char *root, const char *rel_path);

/*
** Prints the content of a directory (not recursively).
*/
void    mls_print_dir(const t_btree_node *node_ptr, char flags);

/*
** Frees a t_mls_element.
*/
void    mls_clean_element(void *ptr);

/*
** Compares two elements of a binary tree of t_mls_element.
*/
int     mls_comp_strings(void *ptr1, void *ptr2);

/*
** Compares two elements of a binary tree of t_mls_element.
*/
int     mls_comp_times(void *ptr1, void *ptr2);

/*
** Executes the my_ls core functionnalities.
*/
t_error	my_ls(const char *path, char flags);

/*
** Parses an array of arguments.
*/
t_error	mls_parse_args(int argc, char **argv,
		       char *flags, int *path_begin);

#endif /* !MY_LS_H_ */
