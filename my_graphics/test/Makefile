##
## Makefile for test of my_graphics in /u/all/lucian_b/cu/work/my_graphics
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue Apr 20 15:30:33 2010 antoine luciani
## Last update Sat Apr 24 08:07:05 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

NAME		=	test
SOURCES		=	main.c
INCLUDES	=	-I../include -I/usr/local/include/X11
LIBS		=	-L../lib -L/usr/X11/lib
LIBS		+=	-lmy_graphics -lX11 -lXext -lmlx_FreeBSD
OBJS		=	$(SOURCES:.c=.o)

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

$(OBJS)		:	$(SOURCES)
		$(CC) -c $(SOURCES) $(CFLAGS)