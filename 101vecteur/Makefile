##
## Makefile for 101vecteur in /u/all/lucian_b/cu/work/projets/101vecteur
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Thu Apr 15 16:18:46 2010 antoine luciani
## Last update Sun Apr 18 18:52:18 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

INCLUDES	=	-Ilibs/my/include -Iinclude
LIBS		=	-Llibs/my/lib -lmy -L/usr/local/lib/gcc/i386-portbld-freebsd5.5/3.4.6 -lg2c

SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)main.c		\
			$(SRC_DIR)vec_clean.c		\
			$(SRC_DIR)vec_fill_random.c	\
			$(SRC_DIR)vec_init.c		\
			$(SRC_DIR)vec_add.c		\
			$(SRC_DIR)vec_mult.c		\
			$(SRC_DIR)vec_dot.c		\
			$(SRC_DIR)vec_norm.c		\
			$(SRC_DIR)vec_cross.c		\
			$(SRC_DIR)vec_angle.c		\
			$(SRC_DIR)option1.c		\
			$(SRC_DIR)vec3_norm.c		\
			$(SRC_DIR)vec3_normalize.c	\
			$(SRC_DIR)vec3_angle.c		\
			$(SRC_DIR)vec3_dot.c		\
			$(SRC_DIR)option2.c		\
			$(SRC_DIR)option3.c

OBJS		=	$(SOURCES:.c=.o)

NAME		=	101vecteur
CFLAGS		=	-Wall -ansi -pedantic $(INCLUDES)

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