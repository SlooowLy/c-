# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 16:09:20 by aaitoual          #+#    #+#              #
#    Updated: 2022/10/13 13:02:58 by aaitoual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp Span.cpp\

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp Span.hpp
	@$(CC) $(CFLAGS) -o $@ -c $<
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all