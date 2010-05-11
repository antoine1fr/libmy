##
## Makefile for fdf in /u/all/lucian_b/cu/work/projects/fdf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue May 11 14:06:06 2010 antoine luciani
## Last update Tue May 11 14:23:03 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/get_next_line.c		\
			$(SRC_DIR)/map_load.c
OBJS		=	$(SOURCES:.c=.o)
LIBS		=	-Llibs/list/lib -llist

LDFLAGS		+=	-Iinclude -Ilibs/list/include
CFLAGS		+=	-W -Wall -Wextra -g3
NAME		=	fdf

$(NAME)		:	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@