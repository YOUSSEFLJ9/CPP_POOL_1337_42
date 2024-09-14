# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/13 12:09:27 by ymomen            #+#    #+#              #
#    Updated: 2024/09/14 18:24:16 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl_2.0
CC = c++
FLAGS= -Wall -Wextra -Werror -std=c++98
SRCS = Harl.cpp main.cpp
OBJS =  $(SRCS:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o :%.cpp  Harl.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re