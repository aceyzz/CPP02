# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cedmulle <cedmulle@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 08:37:29 by cedmulle          #+#    #+#              #
#    Updated: 2024/02/20 10:28:58 by cedmulle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fixed
SRC_DIR	= src/
INC_DIR	= inc/
SRC		= $(SRC_DIR)main.cpp \
			$(SRC_DIR)Fixed.cpp \
			$(SRC_DIR)bsp.cpp \
			$(SRC_DIR)Point.cpp
OBJ		= $(SRC:.cpp=.o)
CXX		= c++
CFL		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CFL) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CXX) $(CFL) -I $(INC_DIR) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
