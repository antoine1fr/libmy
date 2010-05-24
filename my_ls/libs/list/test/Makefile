CC		=	gcc
RM		=	rm -f

INCLUDES	=	-I../include -I${HOME}/rendu/include
LIBS		=	-L../lib -L${HOME}/rendu/lib/ -lmy -llist
SOURCES		=	main.c
OBJS		=	$(SOURCES:.c=.o)

NAME		=	test
CFLAGS		=	$(INCLUDES) -Wall -ansi -pedantic

$(NAME)		:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIBS)

all		:	$(NAME)

$(OBJS)		:	$(SOURCES)
		$(CC) -c $(SOURCES) $(INCLUDES)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	clean all fclean re

