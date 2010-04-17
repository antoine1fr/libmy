##
## Makefile for bistromathique in /u/all/lucian_b/cu/work/bistro/trunk
## 
## Made by antoine luciani
## Login   <lucian_b@epitech.net>
## 
## Started on  Wed Apr  7 10:38:12 2010 antoine luciani
## Last update Wed Apr  7 18:46:57 2010 remy radix
##

CC		=	gcc
OBJS		=	$(SOURCES:.c=.o)
LIBS		=	-Llibs/my/lib -Llibs/list/lib -lmy -llist
NAME		=	calc
BIN_DIR		=	bin/
SRC_DIR		=	src/

SOURCES		=	$(SRC_DIR)op_add.c			\
			$(SRC_DIR)negativize.c			\
			$(SRC_DIR)op_sub.c			\
			$(SRC_DIR)op_calc_len_and_max.c		\
			$(SRC_DIR)op_get_right_value.c		\
			$(SRC_DIR)parser_add_num.c		\
			$(SRC_DIR)parser_is_num.c		\
			$(SRC_DIR)parser_add_op.c		\
			$(SRC_DIR)parser_is_op.c		\
			$(SRC_DIR)parser_token_end.c		\
			$(SRC_DIR)parser.c			\
			$(SRC_DIR)token.c			\
			$(SRC_DIR)op_plus_prep_and_launch.c	\
			$(SRC_DIR)op_less_prep_and_launch.c	\
			$(SRC_DIR)op_mul_prep_and_launch.c	\
			$(SRC_DIR)op_launcher.c			\
			$(SRC_DIR)bin_tree.c			\
			$(SRC_DIR)op_mul.c			\
			$(SRC_DIR)syntaxe_checker.c		\
			$(SRC_DIR)swiffer.c			\
			$(SRC_DIR)eval_expr.c			\
			$(SRC_DIR)main.c

INCLUDE		=	-Ilibs/my/include -Ilibs/list/ -Iinclude
CFLAGS		=	$(INCLUDE) -W -Wall -ansi -pedantic

RM		=	rm -f


$(NAME)		:	$(OBJS)
		$(CC) -o $(BIN_DIR)$(NAME) $(OBJS) $(LIBS)

all		:	$(NAME)

clean		:
		$(RM) $(SRC_DIR)*.o
		$(RM) $(BIN_DIR)$(NAME)

re		:	clean all

.PHONY		:	all clean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(CFLAGS) -c $< -o $ $@