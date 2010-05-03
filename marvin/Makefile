CC		=	gcc
RM		=	rm -f
NAME		=	marvin
SRC_DIR		=	src/
SOURCES		=	$(SRC_DIR)ext_par_beg.c			\
			$(SRC_DIR)ext_par_end.c			\
			$(SRC_DIR)ext_star.c			\
			$(SRC_DIR)ext_type.c			\
			$(SRC_DIR)tokenize.c			\
			$(SRC_DIR)create_decl.c			\
			$(SRC_DIR)ext_name.c			\
			$(SRC_DIR)print_type.c			\
			$(SRC_DIR)print_func.c			\
			$(SRC_DIR)main.c

OBJS		=	$(SOURCES:.c=.o)
INCLUDES	=	-Iinclude -Ilibs/my/include -Ilibs/list/include
CFLAGS		+=	$(INCLUDES) -W -Wall -ansi -pedantic
LIBS		=	-Llibs/my/lib -Llibs/list/lib -lmy -llist

$(NAME)		:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIBS)

all		:	$(NAME)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean  all

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o

.c.o		:	$(SOURCES)
		$(CC) $(CFLAGS) -c $< -o $@