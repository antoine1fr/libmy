##
## Makefile for my_ls in /u/all/lucian_b/cu/work/projects/my_ls
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Mon May 24 10:54:06 2010 antoine luciani
## Last update Mon May 24 11:01:55 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

NAME		=	my_ls
LDFLAGS		+=	-Iinclude -Ilibs/my/include -Ilibs/list/include
CFLAGS		+=	-W -Wall -Wextra -ansi -pedantic
THIRD		=	-Llibs/my/lib -Llibs/list/lib -lmy -llist

SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/main.c			\
			$(SRC_DIR)/btree_init_node.c

OBJECTS		=	$(SOURCES:.c=.o)

$(NAME)		:	$(OBJECTS)
		$(CC) -o $(NAME) $(OBJECTS) $(THIRD)

all		:	$(NAME)

clean		:
		$(RM) $(OBJECTS)

fclean		:	clean
		$(RM) $(OBJECTS)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@