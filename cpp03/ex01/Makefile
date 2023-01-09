NAME=LOVE
CPP=c++
FLAGS=-Wall -Wextra -Werror
RM=rm -rf


all:$(NAME)

$(NAME) : main.o ClapTrap.o
	$(CPP) main.o ClapTrap.o -o $(NAME)

main.o : main.cpp 
	$(CPP) -c $(FLAGS) main.cpp  -o main.o

ClapTrap.o : ClapTrap.cpp  
	$(CPP) -c $(FLAGS) ClapTrap.o -o ClapTrap.cpp

clean:
	$(RM) main.o ClapTrap.o 

fclean:clean
	$(RM) $(NAME)

re:fclean all