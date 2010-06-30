##
## Makefile for libmy in /u/all/lucian_b/cu/util/c/my
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Mon Mar 22 10:40:50 2010 antoine luciani
## Last update Wed Jun 30 10:01:14 2010 antoine luciani
##

CC			=	gcc
RM			=	rm -f
AR			=	ar r
RANLIB			=	ranlib
MV			=	mv
ECHO			=	echo

SRC_DIR			=	src
SOURCES			=	$(SRC_DIR)/my_find_prime_sup.c		\
				$(SRC_DIR)/my_strndup.c			\
				$(SRC_DIR)/my_getnbr.c 			\
				$(SRC_DIR)/my_getnbr_base.c 		\
				$(SRC_DIR)/my_is_prime.c 		\
				$(SRC_DIR)/my_isneg.c 			\
				$(SRC_DIR)/my_power_rec.c 		\
				$(SRC_DIR)/my_put_nbr.c 		\
				$(SRC_DIR)/my_putnbr_base.c		\
				$(SRC_DIR)/my_putchar.c 		\
				$(SRC_DIR)/my_putstr.c 			\
				$(SRC_DIR)/my_revstr.c 			\
				$(SRC_DIR)/my_show_to_wordtab.c 	\
				$(SRC_DIR)/my_showmem.c 		\
				$(SRC_DIR)/my_showstr.c 		\
				$(SRC_DIR)/my_sort_int_tab.c 		\
				$(SRC_DIR)/my_square_root.c 		\
				$(SRC_DIR)/my_str_isalpha.c 		\
				$(SRC_DIR)/my_str_islower.c 		\
				$(SRC_DIR)/my_str_isnum.c 		\
				$(SRC_DIR)/my_str_isprintable.c 	\
				$(SRC_DIR)/my_str_isupper.c 		\
				$(SRC_DIR)/my_str_to_wordtab.c 		\
				$(SRC_DIR)/my_str_to_wordtab_delim.c 	\
				$(SRC_DIR)/my_free_to_wordtab.c		\
				$(SRC_DIR)/my_strcapitalize.c 		\
				$(SRC_DIR)/my_strcat.c 			\
				$(SRC_DIR)/my_strcmp.c 			\
				$(SRC_DIR)/my_strcpy.c 			\
				$(SRC_DIR)/my_strdup.c 			\
				$(SRC_DIR)/my_strlcat.c 		\
				$(SRC_DIR)/my_strlen.c 			\
				$(SRC_DIR)/my_strlowcase.c 		\
				$(SRC_DIR)/my_strncat.c 		\
				$(SRC_DIR)/my_strncmp.c 		\
				$(SRC_DIR)/my_strncpy.c 		\
				$(SRC_DIR)/my_strstr.c 			\
				$(SRC_DIR)/my_strtok.c 			\
				$(SRC_DIR)/my_strupcase.c 		\
				$(SRC_DIR)/my_memset.c			\
				$(SRC_DIR)/my_puterr.c			\
				$(SRC_DIR)/xmalloc.c			\
				$(SRC_DIR)/my_swap.c			\
				$(SRC_DIR)/my_ntostr.c			\
				$(SRC_DIR)/count_nbr_digits.c		\
				$(SRC_DIR)/count_unbr_digits.c		\
				$(SRC_DIR)/my_memcpy.c			\
				$(SRC_DIR)/my_get_wordtab_size.c	\
				$(SRC_DIR)/free_str_tab.c		\
				$(SRC_DIR)/my_printf.c			\
				$(SRC_DIR)/request.c			\
				$(SRC_DIR)/transform_S.c		\
				$(SRC_DIR)/transform_X.c		\
				$(SRC_DIR)/transform_b.c		\
				$(SRC_DIR)/transform_c.c		\
				$(SRC_DIR)/transform_d.c		\
				$(SRC_DIR)/transform_o.c		\
				$(SRC_DIR)/transform_p.c		\
				$(SRC_DIR)/transform_s.c		\
				$(SRC_DIR)/transform_u.c		\
				$(SRC_DIR)/transform_x.c		\
				$(SRC_DIR)/print_request.c		\

INCLUDES		=	-Iinclude
CFLAGS			+=	-W -Wall -Wextra -ansi -pedantic
OBJ			=	$(SOURCES:.c=.o)

NAME			=	libmy.a

$(NAME)		: 	$(OBJ)
			$(AR) $(NAME) $(OBJ)
			$(RANLIB) $(NAME)

all		: 	$(NAME)

clean		:
			$(RM) $(OBJ)
			$(RM) *~

fclean		:	clean
			$(RM) $(NAME)

re		: 	fclean all

.PHONY		: 	clean fclean re all

.SUFFIXES	:	.c .o

.c.o		:
			@$(CC) -c $(INCLUDES) $(CFLAGS) $< -o $@ && $(ECHO) "Generating $@..."