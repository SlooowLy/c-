NAME = harl

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp harl.cpp\

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp	./harl.hpp
	@$(CC) $(CFLAGS) -o $@  -c $<
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all