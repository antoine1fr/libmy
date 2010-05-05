CXX		=	g++
RM		=	rm -f

NAME		=	103homogene
SRC_DIR		=	src
SOURCES		=	$(SRC_DIR)/main.cpp
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