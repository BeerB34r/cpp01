CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -g
SRC				=	main.cpp
OBJ				=	$(SRC:.cpp=.o)
NAME			=	MySed

.DEFAULT_GOAL	=	$(NAME)

all				:	$(NAME)

$(NAME)			:	$(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean			:
	$(RM) $(OBJ)

fclean			:
	$(MAKE) clean
	$(RM) $(NAME)

re				:
	$(MAKE) fclean
	$(MAKE)

test			:
	echo "tests require manual input, run the script yourself"


.PHONY			:	clean fclean re all test
