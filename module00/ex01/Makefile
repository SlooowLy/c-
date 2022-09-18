NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./phonebook.cpp \

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp	PhoneBook.hpp Contact.hpp
	$(CC) $(CFLAGS) -o $@  -c $<

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all