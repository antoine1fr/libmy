/*
** my.h for Contient les prototypes des fonctions de la librairie libmy.a. in /u/all/lucian_b/cu/rendu/include
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 19 10:47:57 2010 antoine luciani
** Last update Tue Jun  1 17:55:32 2010 antoine luciani
*/

#ifndef MY_H
# define MY_H

typedef enum	e_my_bool
  {
    MY_FALSE,
    MY_TRUE
  }		t_my_bool;

int	my_find_prime_sup(int nb);
int	my_is_prime(int nbr);
void	my_isneg(int n);

int	my_power_rec(int nb, int power);
char	*my_revstr(char *str);
void	my_showmem(char *str, int size);
void	my_showstr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_square_root(int nb);

void	my_swap(int *p1, int *p2);
void	*my_memset(void *ptr, int value, int size);
void	*xmalloc(int size);
void	my_memcpy(void *dest, void *src, unsigned int size);

int	my_getnbr(char *str);
int	my_getnbr_base(char *str, char *base);

void	my_puterr(char *str);
void	my_put_nbr(int n);
int	my_putnbr_base(int nbr, char *base);
void	my_putchar(char c);
void	my_putstr(const char *str);

char	*my_strtok(const char *str, char delim);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, const char *src);
int	my_strcmp(const char *s1, const char *s2);
char	*my_strcpy(char *dest, const char *src);
int	my_strlcat(char *dest, char *src, int size);
int	my_strlen(const char *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int n);
int	my_strncmp(const char *s1, const char *s2, int n);
char	*my_strncpy(char *dest, const char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
char	*my_strdup(char *str);
char	*my_strndup(char *src, int n);

t_my_bool	my_str_isalpha(char *str);
t_my_bool	my_str_islower(const char *str);
t_my_bool	my_str_isnum(const char *str);
t_my_bool	my_str_isprintable(const char *str);
t_my_bool	my_str_isupper(const char *str);

char	**my_str_to_wordtab(const char *str);
char	**my_str_to_wordtab_delim(const char *str, char delim);
void	my_show_to_wordtab(char **tab);
void	my_free_to_wordtab(char **tab);
char	*my_untostr(unsigned int n, char *base);
char	*my_ntostr(int n, char *base);

#endif /* !MY_H */
