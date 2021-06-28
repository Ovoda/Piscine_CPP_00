# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 15:10:37 by calide-n          #+#    #+#              #
#    Updated: 2021/05/31 16:18:26 by calide-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

CC		= clang++ -Wall -Wextra -Werror -std=c++98

SRC		= megaphone.cpp

OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re