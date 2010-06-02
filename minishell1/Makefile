##
## Makefile for 104systeme in /u/all/lucian_b/cu/work/projects/104systeme/src
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Tue Jun  1 02:19:17 2010 antoine luciani
## Last update Wed Jun  2 18:30:53 2010 antoine luciani
##

CC		=	gcc
RM		=	rm -f

NAME		=	mysh
SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/main.c			\
			$(SRC_DIR)/get_next_line.c		\
			$(SRC_DIR)/msh_construct_full_path.c	\
			$(SRC_DIR)/msh_find_valid_path.c	\
			$(SRC_DIR)/msh_get_env_path.c		\
			$(SRC_DIR)/msh_launch_command.c		\
			$(SRC_DIR)/msh_get_command_path.c	\
			$(SRC_DIR)/msh_launch_builtin.c		\
			$(SRC_DIR)/msh_exit_command.c		\
			$(SRC_DIR)/msh_env_init.c		\
			$(SRC_DIR)/msh_env_append.c		\
			$(SRC_DIR)/msh_env_get_var_index.c	\
			$(SRC_DIR)/msh_testenv_getvarindex.c	\
			$(SRC_DIR)/msh_env_resize.c		\
			$(SRC_DIR)/msh_env_command.c		\
			$(SRC_DIR)/msh_env_fill_from_array.c

OBJECTS		=	$(SOURCES:.c=.o)

LDFLAGS		+=	-Iinclude -Ilibs/my/include -Ilibs/my_printf/include
CFLAGS		+=	-W -Wall -Wextra -ansi -pedantic -g3
THIRD		+=	-Llibs/my/lib -Llibs/my_printf/ -lmy_printf -lmy

$(NAME)		:	$(OBJECTS)
		$(CC) -o $(NAME) $(OBJECTS) $(THIRD)

all		:	$(NAME)

clean		:
		$(RM) $(NAME)

fclean		:	clean
		$(RM) $(OBJECTS)

re		:	fclean all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(LDFLAGS) $(CFLAGS) -c $< -o $@