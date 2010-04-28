##
## Makefile for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Wed Apr 14 14:07:55 2010 antoine luciani
## Last update Mon Apr 26 11:29:58 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f
AR		=	ar -r
RANLIB		=	ranlib
ECHO		=	echo -n
CAT		=	cat

INCLUDES	=	-Ilibs/my/include -Iinclude
LIBS		=	-Llibs/my/lib -lmy

SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)request.c		\
			$(SRC_DIR)my_printf.c		\
			$(SRC_DIR)print_request.c	\
			$(SRC_DIR)transform_c.c		\
			$(SRC_DIR)transform_b.c		\
			$(SRC_DIR)transform_S.c		\
			$(SRC_DIR)transform_s.c

OBJS		=	$(SOURCES:.c=.o)

OS		=	`uname -s`
ARCH		=	`uname -m`
NAME		=	libmy_printf$(ARCH)-$(OS).a
TEST_NAME	=	test_my_printf
CFLAGS		=	$(INCLUDES) -Wall -ansi -pedantic -g

$(NAME)		:	$(OBJS)
		$(AR) $(NAME) $(OBJS)
		$(RANLIB) $(NAME)

all		:	$(NAME)

debug		:	$(OBJS)
		$(CC) $(CFLAGS) -o $(TEST_NAME) $(SRC_DIR)main.c $(OBJS) $(LIBS)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)
		$(RM) $(TEST_NAME)

re		:	fclean all

re_debug	:	fclean debug

.PHONY		:	all clean fclean re make_libs

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(CFLAGS) -c $< -o $@