# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: jdong <jdong@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2026/05/20 18:34:22 by jdong         #+#    #+#                  #
#    Updated: 2026/06/13 17:32:53 by jingyandong   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME = run

HEADER = Fixed.hpp Point.hpp

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ = $(SRC:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):$(OBJ)
	c++ $(FLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all, clean, fclean