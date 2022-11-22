NAME=BraiiiiiiinnnzzzZ
CPP = c++
FLAGS=-Wall -Wextra -Werror #-std=c++98
RM=rm -rf
SRC=main.cpp\
	Zombie.cpp\
	NewZombie.cpp\
	RandomChump.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) -c $(FLAGS) $< -o $@ 

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all