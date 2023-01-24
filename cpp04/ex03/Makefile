NAME=INTERFACES
CPP=c++
FALGS= -Wall -Wextra -Werror -std=c++98  #-fsanitize=address
RM=rm -rf

SRC= AMateria.cpp\
	 Character.cpp\
	 Cure.cpp\
	 Ice.cpp\
	 ICharacter.cpp\
	 IMateriaSource.cpp\
	 MateriaSource.cpp\
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
