NAME=POLY_2
CPP=c++
FALGS=-Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM=rm -rf
SRC=Animal.cpp\
	Dog.cpp\
	Cat.cpp\
	Brain.cpp\
	main.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re: fclean all
