NAME = Zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./newZombie.cpp randomChump.cpp Zombie.cpp main.cpp\

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -o $@  -c $^
all : $(NAME)

$(NAME) : $(OBJ) Zombie.hpp
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all