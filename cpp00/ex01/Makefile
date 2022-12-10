NAME= phonebook
SRC= phonebook.cpp
CC= c++
FLAG= -g -Wall -Wextra -Werror -std=c++98

-e all:	$(NAME)

-e $(NAME):	$(SRC)
-e 	$(CC) $(FLAG) -o $@ $^

-e clean:

-e fclean: clean
-e 	rm -rf $(NAME)

-e re: fclean all

-e .PHONY: all clean fclean re test
