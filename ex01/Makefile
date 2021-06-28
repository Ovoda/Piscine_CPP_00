# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calide-n <calide-n@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/22 15:32:36 by calide-n          #+#    #+#              #
#    Updated: 2021/05/31 17:15:33 by calide-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phoneBook

CXX		= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

INC		= -I./

SRCS	= 	phoneBook.cpp		\
			Contact.cpp

OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CXX) $(INC) -c $(CXXFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(INC) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
