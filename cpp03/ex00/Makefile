# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/23 17:43:57 by fbenini-          #+#    #+#              #
#    Updated: 2026/06/23 18:00:11 by fbenini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.hpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re
