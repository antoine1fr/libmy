CXX		=	g++
RM		=	rm -f

NAME		=	102matrice
SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/matrix2.cpp		\
			$(SRC_DIR)/matrix2_add.cpp	\
			$(SRC_DIR)/matrix2_mult.cpp	\
			$(SRC_DIR)/vector2.cpp		\
			$(SRC_DIR)/number.cpp		\
			$(SRC_DIR)/option_functor.cpp	\
			$(SRC_DIR)/option1_functor.cpp	\
			$(SRC_DIR)/main.cpp
OBJS		=	$(SOURCES:.cpp=.o)
INCLUDES	=	include
CXXFLAGS	+=	-I$(INCLUDES) -W -Wall -ansi -pedantic -g

$(NAME)		:	$(OBJS)
		$(CXX) -o $(NAME) $(OBJS)

all		:	$(NAME)

clean		:
		$(RM) $(OBJS)

fclean		:	clean
		$(RM) $(NAME)

re		:	fclean all

.PHONY		:	clean all fclean re

.SUFFIXES	:	.cpp .o

.cpp.o		:	$(SOURCES)
		$(CXX) $(CXXFLAGS) -c $< -o $@