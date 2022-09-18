NAME = ref_ptr

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp\

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	@$(CC) $(CFLAGS) -o $@  -c $^
all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all