##
## Makefile for MiniLibX in /home/boulon/work/c/raytraceur/minilibx
## 
## Made by Olivier Crouzet
## Login   <ol@epitech.net>
## 
## Started on  Tue Oct  5 15:56:43 2004 Olivier Crouzet
## Last update Tue Oct  5 15:56:49 2004 Olivier Crouzet
##


CC		=	gcc
AR		=	ar r
RANLIB		=	ranlib
CP		=	cp
RM		=	rm -f

NAME		=	libmlx.a

SRC_DIR		=	src/
SRC		=	$(SRC_DIR)mlx_init.c		\
			$(SRC_DIR)mlx_new_window.c	\
			$(SRC_DIR)mlx_pixel_put.c		\
			$(SRC_DIR)mlx_loop.c		\
			$(SRC_DIR)mlx_mouse_hook.c	\
			$(SRC_DIR)mlx_key_hook.c		\
			$(SRC_DIR)mlx_expose_hook.c	\
			$(SRC_DIR)mlx_loop_hook.c		\
			$(SRC_DIR)mlx_int_anti_resize_win.c	\
			$(SRC_DIR)mlx_int_do_nothing.c		\
			$(SRC_DIR)mlx_int_wait_first_expose.c	\
			$(SRC_DIR)mlx_int_get_visual.c		\
			$(SRC_DIR)mlx_flush_event.c		\
			$(SRC_DIR)mlx_string_put.c		\
			$(SRC_DIR)mlx_new_image.c			\
			$(SRC_DIR)mlx_get_data_addr.c		\
			$(SRC_DIR)mlx_put_image_to_window.c	\
			$(SRC_DIR)mlx_get_color_value.c		\
			$(SRC_DIR)mlx_clear_window.c		\
			$(SRC_DIR)mlx_xpm.c			\
			$(SRC_DIR)mlx_int_str_to_wordtab.c	\
			$(SRC_DIR)mlx_destroy_window.c		\
			$(SRC_DIR)mlx_int_param_event.c		\
			$(SRC_DIR)mlx_int_set_win_event_mask.c	\
			$(SRC_DIR)mlx_hook.c			\
			$(SRC_DIR)mlx_rgb.c

OBJ		=	$(SRC:.c=.o)
CFLAGS		=	-Iinclude -I/usr/include/X11/include -O3

$(NAME)		:	$(OBJ)
		$(AR) $(NAME) $(OBJ)
		$(RANLIB) $(NAME)
		$(CP) $(NAME) libmlx_$(HOSTTYPE).a

all		:	$(NAME)

clean		:
		$(RM) $(OBJ) $(NAME) *~ core *.core

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SRC)
		$(CC) $(CFLAGS) -c $< -o $@