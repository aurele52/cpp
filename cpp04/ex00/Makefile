NAME= poly
SRC=	main.cpp	\
		Cat.class.cpp	\
		Dog.class.cpp	\
		WrongCat.class.cpp	\
		WrongAnimal.class.cpp	\
		Animal.class.cpp
CC= c++
FLAG= -g -Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME):	$(SRC)
	$(CC) $(FLAG) -o $@ $^

clean:

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re test
