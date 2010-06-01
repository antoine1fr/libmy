##
## Makefile for libmy in /u/all/lucian_b/cu/util/c/my
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Mon Mar 22 10:40:50 2010 antoine luciani
## Last update Sat May 29 16:52:49 2010 antoine luciani
##

CC	=		gcc

SOURCES	=		src/my_find_prime_sup.c		\
			src/my_strndup.c		\
			src/my_getnbr.c 		\
			src/my_getnbr_base.c 		\
			src/my_is_prime.c 		\
			src/my_isneg.c 			\
			src/my_power_rec.c 		\
			src/my_put_nbr.c 		\
			src/my_putnbr_base.c		\
			src/my_putchar.c 		\
			src/my_putstr.c 		\
			src/my_revstr.c 		\
			src/my_show_to_wordtab.c 	\
			src/my_showmem.c 		\
			src/my_showstr.c 		\
			src/my_sort_int_tab.c 		\
			src/my_square_root.c 		\
			src/my_str_isalpha.c 		\
			src/my_str_islower.c 		\
			src/my_str_isnum.c 		\
			src/my_str_isprintable.c 	\
			src/my_str_isupper.c 		\
			src/my_str_to_wordtab.c 	\
			src/my_str_to_wordtab_delim.c 	\
			src/my_free_to_wordtab.c	\
			src/my_strcapitalize.c 		\
			src/my_strcat.c 		\
			src/my_strcmp.c 		\
			src/my_strcpy.c 		\
			src/my_strdup.c 		\
			src/my_strlcat.c 		\
			src/my_strlen.c 		\
			src/my_strlowcase.c 		\
			src/my_strncat.c 		\
			src/my_strncmp.c 		\
			src/my_strncpy.c 		\
			src/my_strstr.c 		\
			src/my_strtok.c 		\
			src/my_strupcase.c 		\
			src/my_memset.c			\
			src/my_puterr.c			\
			src/xmalloc.c			\
			src/my_swap.c			\
			src/my_ntostr.c			\
			src/count_nbr_digits.c		\
			src/count_unbr_digits.c		\
			src/my_memcpy.c

LDFLAGS	+=		-Iinclude/
CFLAGS	+=		-W -Wall -Wextra -ansi -pedantic
OBJ	=		$(SOURCES:.c=.o)
NAME	=		libmy.a
RM	=		rm -f
AR	=		ar r
RANLIB	=		ranlib
MV	=		mv
LIBDIR	=		lib/

$(NAME)		: 	$(OBJ)
			$(AR) $(NAME) $(OBJ)
			$(RANLIB) $(NAME)
			$(MV) $(NAME) $(LIBDIR)

all		: 	$(NAME)

clean		:
			$(RM) $(OBJ)
			$(RM) *~

fclean		:	clean
			$(RM) $(LIBDIR)$(NAME)

re		: 	fclean all

.PHONY		: 	clean fclean re all

.SUFFIXES	:	.c .o

.c.o		:
			$(CC) -c $(LDFLAGS) $(CFLAGS) $< -o $@