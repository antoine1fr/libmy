/*
** my.h for Contient les prototypes des fonctions de la librairie libmy.a. in /u/all/lucian_b/cu/rendu/include
** 
** Made by antoine luciani
** Login   <lucian_b@epitech.net>
** 
** Started on  Fri Mar 19 10:47:57 2010 antoine luciani
** Last update Mon Apr 26 12:21:16 2010 antoine luciani
*/

#ifndef MYH
# define MY_H

int	my_find_prime_sup(int nb);
int	my_getnbr(char *str);
int	my_getnbr_base(char *str, char *base);
int	my_is_prime(int nbr);
void	my_isneg(int n);
int	my_power_rec(int nb, int power);
void	my_put_nbr(int n);
void	my_puterr(char *str);
int	my_putnbr_base(int nbr, char *base);
void	my_putchar(char c);
void	my_putstr(char *str);
char	*my_revstr(char *str);
int	my_show_to_wordtab(char **tab);
void	my_showmem(char *str, int size);
int	my_showstr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_square_root(int nb);
int	my_str_isalpha(char *str);
char	*my_strtok(char *str, char delim);
int	my_str_islower(char *str);
int	my_str_isnum(char *str);
int	my_str_isprintable(char *str);
int	my_str_isupper(char *str);
char	**my_str_to_wordtab(char *str);
char	**my_str_to_wordtab_delim(char *str, char delim);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
int	my_strlcat(char *dest, char *src, int size);
int	my_strlen(char *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char *src, int n);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_strstr(char *str, char *to_find);
char	*my_strupcase(char *str);
void	my_swap(int *p1, int *p2);
void	*my_memset(void *ptr, int value, int size);
void	*xmalloc(int size);
char	*my_strdup(char *str);
char	*my_strndup(char *src, int n);
char	*my_untostr(unsigned int n, char *base);

#endif /* !MY_H */
