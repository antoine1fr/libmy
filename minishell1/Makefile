##
## Makefile for 104systeme in /u/all/lucian_b/cu/work/projects/104systeme/src
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue Jun  1 02:19:17 2010 antoine luciani
## Last update Tue Jun  1 14:15:17 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

NAME		=	mysh
SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/main.c
OBJECTS		=	$(SOURCES:.c=.o)

LDFLAGS		+=	-Iinclude -Ilibs/my/include
CFLAGS		+=	-W -Wall -Wextra -ansi -pedantic
THIRD		+=	-Llibs/my/lib -lmy

$(NAME)		:	$(OBJECTS)
		$(CC) -o $(NAME) $(OBJECTS) $(THIRD)

all		:	$(NAME)

clean		:
		$(RM) $(NAME)

fclean		:	clean
		$(RM) $(OBJECTS)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@