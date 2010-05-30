/*
** mls_comp_elements.c for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Sun May 30 20:52:58 2010 antoine luciani
** Last update Sun May 30 21:23:35 2010 antoine luciani
*/

#include <dirent.h>

#include "my.h"
#include "list.h"
#include "btree.h"
#include "my_ls.h"

int		mls_comp_strings(void *ptr1, void *ptr2)
{
  return (my_strcmp((char *)ptr1, (char *)ptr2));
}

int		mls_comp_times(void *ptr1, void *ptr2)
{
  return (*(int *)ptr2 - *(int *)ptr1);
}
