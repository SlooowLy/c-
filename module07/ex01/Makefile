# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 16:09:20 by aaitoual          #+#    #+#              #
#    Updated: 2022/10/16 15:05:08 by aaitoual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp\

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp iter.hpp
	@$(CC) $(CFLAGS) -o $@  -c $<
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all