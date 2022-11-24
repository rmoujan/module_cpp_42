NAME=Unnecessary_violence
CPP=c++
FALGS=-Wall -Wextra -Wall -std=c++98
RM= rm -rf
SRC=main.cpp\
	 Weapon.cpp\
	 HumanA.cpp\
	 HumanB.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $(NAME)
%.o:%.cpp
	$(CPP) -c $(FLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all
