NAME=BraiiiiiiinnnzzzZ
CPP = c++
FALGS=-Wall -Wextra -werror #-std=c++98
RM=rm -rf
SRC=main.cpp\
	Zombie.cpp\
	NewZombie.cpp\
	RandomChump.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME) Zombie.hpp

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CPP) -c $(FLAGS) $< -o $@ 

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all