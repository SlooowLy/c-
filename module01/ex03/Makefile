NAME = Weapon

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp HumanA.cpp HumanB.cpp Weapon.cpp\

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp	HumanA.hpp	HumanB.hpp	Weapon.hpp
	@$(CC) $(CFLAGS) -o $@  -c $<
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all