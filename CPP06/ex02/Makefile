# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymomen <ymomen@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 12:53:15 by ymomen            #+#    #+#              #
#    Updated: 2024/11/27 12:55:24 by ymomen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
SRCS = main.cpp Base.cpp util.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp  A.hpp B.hpp C.hpp util.hpp Base.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean : clean 
	$(RM) $(NAME)
re : fclean all

.PHONY : clean