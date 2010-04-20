##
## Makefile for my_graphics in /u/all/lucian_b/cu/work/my_graphics
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue Apr 20 14:30:58 2010 antoine luciani
## Last update Tue Apr 20 14:43:04 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f
AR		=	ar r
RANLIB		=	ranlib

LIB_DIR		=	lib/
SRC_DIR		=	src/
LIB_NAME	=	$(LIB_DIR)libmy_graphics.a

SOURCES		=	$(SRC_DIR)mgr_device.c
OBJS		=	$(SOURCES:.c=.o)
INCLUDES	=	-I/usr/X11/include -Iinclude
CFLAGS		=	$(INCLUDES) -Wall -ansi -pedantic

$(LIB_NAME)	:	$(OBJS)
		$(AR) $(LIB_NAME) $(OBJS)
		$(RANLIB) $(LIB_NAME)

all		:	$(LIB_NAME)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(LIB_NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(CFLAGS) -c $< -o $@