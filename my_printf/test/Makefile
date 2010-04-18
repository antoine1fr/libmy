##
## Makefile for test my_printf in /u/all/lucian_b/cu/work/projets/my_printf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Sun Apr 18 13:38:30 2010 antoine luciani
## Last update Sun Apr 18 14:09:44 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

INCLUDES	=	-I../libs/my/include -I../include
SOURCES		=	main.c
OBJS		=	$(SOURCES:.c=.o)
LIBS		=	-L../libs/my/lib -L../ -lmy -lmy_printf`uname -m`-`uname -s`
NAME		=	test_my_printf
CFLAGS		=	-Wall -ansi -pedantic $(INCLUDES)

$(NAME)		:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIBS)

all		:	$(NAME)

$(OBJS)		:	$(SOURCES)
		$(CC) $(CFLAGS) -c $(SOURCES)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re