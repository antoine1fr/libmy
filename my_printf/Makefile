##
## Makefile for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Wed Apr 14 14:07:55 2010 antoine luciani
## Last update Sun Apr 18 14:10:41 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f
AR		=	ar -r
RANLIB		=	ranlib
ECHO		=	echo -n
CAT		=	cat


INCLUDES	=	-Ilibs/my/include -Iinclude

SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)request.c

OBJS		=	$(SOURCES:.c=.o)

OS		=	`uname -s`
ARCH		=	`uname -m`
NAME		=	libmy_printf$(ARCH)-$(OS).a
CFLAGS		=	$(INCLUDES) -Wall -ansi -pedantic

$(NAME)		:	$(OBJS)
		$(AR) $(NAME) $(OBJS)
		$(RANLIB) $(NAME)

all		:	$(NAME)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(CFLAGS) -c $< -o $@

