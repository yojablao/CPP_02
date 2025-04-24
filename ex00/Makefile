NAME = orthodox
CC = c++
CFlage = -Wall -Wextra -Werror  -std=c++98
HEAD = Fixed.hpp 
SRC = Fixed.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)


all:$(NAME)

%.o: %.cpp $(HEAD)
	$(CC) $(CFlage) -c $< -o $@
$(NAME):$(OBJ)
	$(CC) $(CFlage) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re:fclean all