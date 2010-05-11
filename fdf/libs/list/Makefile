##
## Makefile for linked lists in /u/all/lucian_b/cu/work/piscine/eval_expr/lib/list
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Thu Mar 25 13:25:01 2010 antoine luciani
## Last update Thu Apr 15 11:25:17 2010 antoine luciani
##

CC		=	gcc
NAME		=	liblist.a
INCLUDES	=	-I${HOME}/rendu/include -Iinclude
CFLAGS		=	-W -Wall -ansi -pedantic $(INCLUDES)

SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)list_append_data.c	\
			$(SRC_DIR)list_append_node.c	\
			$(SRC_DIR)list_create_node.c	\
			$(SRC_DIR)list_init.c		\
			$(SRC_DIR)list_push_data.c	\
			$(SRC_DIR)list_push_node.c	\
			$(SRC_DIR)list_print_data.c	\
			$(SRC_DIR)list_clean.c		\

OBJS		=	$(SOURCES:.c=.o)

RM		=	rm -f
AR		=	ar r
RANLIB		=	ranlib
MV		=	mv

LIBDIR		=	lib/

$(NAME)		:	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)
			$(MV) $(NAME) $(LIBDIR)

all		:	$(NAME)

clean		:
			$(RM) $(OBJS)
			$(RM) *~

fclean		:	clean
			$(RM) $(LIBDIR)$(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:
			$(CC) -c $(CFLAGS) $< -o $@