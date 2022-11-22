NAME=Moar_brainz

CPP = c++

FALGS=-Wall -Wextra -werror #-std=c++98

RM=rm -rf

SRC=main.cpp\
	Zombie.cpp\
	ZombieHorde.cpp\
	

OBJ = $(subst .cpp,.o,$(SRC))

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