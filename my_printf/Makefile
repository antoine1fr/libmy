##
## Makefile for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Wed Apr 14 14:07:55 2010 antoine luciani
## Last update Sat Apr 17 20:37:30 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f
AR		=	ar -r
RANLIB		=	ranlib


INCLUDES	=	-Ilibs/my/include -Iinclude
LIBS		=	-Llibs/my/lib -lmy

SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)request.c	\
			$(SRC_DIR)main.c

OBJS		=	$(SOURCES:.c=.o)

NAME		=	libmy_printf`uname -m`-`uname -s`.a
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

