CXX				=	c++
CXXFLAGS		=	-Wall -Wextra -Werror -std=c++17 -g
SRC				=	main.cpp Harl.cpp
OBJ				=	$(SRC:.cpp=.o)
NAME			=	Harl

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


.PHONY			:	clean fclean re all
