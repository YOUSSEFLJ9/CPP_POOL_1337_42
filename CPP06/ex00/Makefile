# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 11:26:20 by ymomen            #+#    #+#              #
#    Updated: 2024/11/26 21:14:37 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
SRCS = main.cpp ScalarConverter.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  ScalarConverter.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)
re : fclean all

.PHONY : clean