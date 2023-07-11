NAME= PmergeMe
SRC=	main.cpp	\
		PmergeMe.cpp
CC= c++
FLAGS= -g -Wall -Wextra -Werror -std=c++98
OBJ=$(SRC:.cpp=.o)
INC= main.hpp
.cpp.o:
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(INC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re test
