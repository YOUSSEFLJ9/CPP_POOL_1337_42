# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 18:22:04 by ymomen            #+#    #+#              #
#    Updated: 2024/11/30 14:45:09 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
SRCS = main.cpp 
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp Array.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)
re : fclean all

.PHONY : clean