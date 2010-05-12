##
## Makefile for fdf in /u/all/lucian_b/cu/work/projects/fdf
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue May 11 14:06:06 2010 antoine luciani
## Last update Wed May 12 21:17:47 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/get_next_line.c		\
			$(SRC_DIR)/map_load.c			\
			$(SRC_DIR)/map_tokenize_file.c		\
			$(SRC_DIR)/map_destroy.c		\
			$(SRC_DIR)/mat4f_mult_vec4f.c		\
			$(SRC_DIR)/main.c
OBJS		=	$(SOURCES:.c=.o)
LIBS		=	-Llibs/list/lib -Llibs/my/lib -Llibs/my_graphics/lib -lmy -llist -lmy_graphics

LDFLAGS		+=	-Iinclude -Ilibs/my/include -Ilibs/list/include -Ilibs/my_graphics/include
CFLAGS		+=	-W -Wall -Wextra -g3
NAME		=	fdf

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
		$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@