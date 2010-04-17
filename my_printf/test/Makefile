##
## Makefile for test my_printf in /u/all/lucian_b/cu/work/projets/my_printf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Mon Apr 12 11:53:59 2010 antoine luciani
## Last update Mon Apr 12 12:02:07 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

SOURCES		=	main.c
OBJS		=	$(SOURCES:.c=.o)
INCLUDES	=	-I../libs/my/include
LIBS		=	-L../libs/my/lib -lmy
CFLAGS		=	$(INCLUDES) -W -Wall -ansi -pedantic
NAME		=	test

$(NAME)		:	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LIBS)

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