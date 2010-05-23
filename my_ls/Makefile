##
## Makefile for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Sun May 23 10:56:57 2010 antoine luciani
## Last update Sun May 23 11:27:38 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

NAME		=	my_ls
LDFLAGS		+=	-Iinclude -Ilibs/my/include
CFLAGS		+=	-W -Wall -Wextra -ansi -pedantic
LIBS		=	-Llibs/my/lib -lmy

SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/main.c
OBJECTS		=	$(SOURCES:.c=.o)

$(NAME)		:	$(OBJECTS)
		$(CC) -o $(NAME) $(OBJECTS) $(LIBS)

all		:	$(NAME)

clean		:
		$(RM) $(OBJECTS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(OBJECTS)
		$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@