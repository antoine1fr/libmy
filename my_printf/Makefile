##
## Makefile for my_printf in /u/all/lucian_b/cu/work/projets/my_printf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Wed Apr 14 14:07:55 2010 antoine luciani
## Last update Fri Apr 16 17:11:19 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -r


INCLUDES	=	-Ilibs/my/include -Iinclude
LIBS		=	-Llibs/my/lib -lmy
SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)my_printf.c
OBJS		=	$(SOURCES:.c=.o)
NAME		=	libmy_printf`uname -m`-`uname -s`.a
CFLAGS		=	$(INCLUDES) -Wall -ansi -pedantic

$(NAME)		:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIBS)

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

