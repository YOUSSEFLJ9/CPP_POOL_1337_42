# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 20:27:10 by ymomen            #+#    #+#              #
#    Updated: 2024/10/15 18:53:48 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Ice.hpp Cure.hpp AMateria.hpp Character.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean