# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbenini- <fbenini-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/08 15:49:33 by fbenini-          #+#    #+#              #
#    Updated: 2026/09/09 18:47:08 by fbenini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp IMateriaSource.cpp MateriaSource.cpp Character.cpp ICharacter.cpp AMateria.cpp Ice.cpp Cure.cpp

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
