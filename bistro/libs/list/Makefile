##
## Makefile for liblist in /u/all/radix_r/cu/rendu/piscine/eval_expr/lib/liblist
## 
## Made by remy radix
## Login   <radix_r@epitech.net>
## 
## Started on  Fri Mar 26 12:20:11 2010 remy radix
## Last update Thu Apr  1 16:10:14 2010 antoine luciani
##

CC		= 	gcc
AR		= 	ar r
RANLIB		= 	ranlib
RM		=	rm -f
CP		=	cp
NAME		= 	liblist.a
LIB_DIR		=	lib/
INCLUDE_DIR	=	../my/include/
LIB_INCLUDE	=	list.h
INCLUDES	=	-include my.h	\
			-include $(LIB_INCLUDE)
SRCS		=	list_create.c		\
			list_create_node.c	\
			list_pop.c		\
			list_destroy.c		\
			list_sub_list.c		\
			list_push.c		\
			list_app.c		\
			list_pop_until.c	\
			list_apply_on.c		\
			list_get_node.c		\
			list_get_last_node.c
OBJS		=	$(SRCS:.c=.o)
CFLAGS		= 	-I. -I$(INCLUDE_DIR) $(INCLUDES) -W -Wall -ansi -pedantic

$(NAME)		:	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)
			$(CP) $(NAME) $(LIB_DIR)$(NAME)

all		:	$(NAME)

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)
			$(RM) $(LIB_DIR)/$(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:
	$(CC) -c $(CFLAGS) $< -o $@