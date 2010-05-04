##
## Makefile for my_graphics in /u/all/lucian_b/cu/work/my_graphics
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue Apr 20 14:30:58 2010 antoine luciani
## Last update Tue May  4 15:17:18 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f
AR		=	ar r
RANLIB		=	ranlib

LIB_DIR		=	lib
SRC_DIR		=	src
LIB_NAME	=	$(LIB_DIR)/libmy_graphics.a

SOURCES		=	$(SRC_DIR)/mgr_device.c		\
			$(SRC_DIR)/mgr_window.c		\
			$(SRC_DIR)/my_graphics.c	\
			$(SRC_DIR)/mgr_create_image.c	\
			$(SRC_DIR)/mgr_img_put_pixel.c	\
			$(SRC_DIR)/mgr_img_fill.c

OBJS		=	$(SOURCES:.c=.o)
INCLUDES	=	-I/usr/X11/include -Iinclude
CFLAGS		+=	-Wall -ansi -pedantic
LDFLAGS		+=	$(INCLUDES)

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
		$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@