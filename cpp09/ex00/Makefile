# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: audreyer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/21 22:50:22 by audreyer          #+#    #+#              #
#    Updated: 2022/12/15 13:18:56 by audreyer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	BitcoinExchange.cpp \
		main.cpp

OBJ			=	$(SRC:.cpp=.o)

NAME		=	btc

INC			=	main.hpp

CC			=	c++

FLAGS		=	-g -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJ) $(INC)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

.cpp.o:
			$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all 

.PHONY:		all clean fclean re
