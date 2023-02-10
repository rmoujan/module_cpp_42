NAME=STACK
CPP=clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
rm=rm-rf
SRC= main.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o:%.cpp  
	$(CPP)  $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)

re:fclean all