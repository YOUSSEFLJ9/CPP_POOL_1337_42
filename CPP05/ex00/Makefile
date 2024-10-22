# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/16 11:26:20 by ymomen            #+#    #+#              #
#    Updated: 2024/10/18 20:56:16 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex05
SRCS = main.cpp Bureaucrat.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werorr -std=c++98
CC = c++
RM = rm -f

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  Bureaucrat.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(OBJS)
re : fclean all

.PHONY : clean