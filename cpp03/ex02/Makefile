NAME=WORK
CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -rf


all:$(NAME)

$(NAME) : main.o ClapTrap.o ScavTrap.o FragTrap.o
	$(CPP) main.o ClapTrap.o ScavTrap.o FragTrap.o -o $(NAME)

main.o : main.cpp 
	$(CPP) -c $(FLAGS) main.cpp  -o main.o

ClapTrap.o : ClapTrap.cpp 
	$(CPP) -c $(FLAGS) ClapTrap.cpp -o ClapTrap.o

ScavTrap.o : ScavTrap.cpp 
	$(CPP) -c $(FLAGS) ScavTrap.cpp -o ScavTrap.o

FragTrap.o : FragTrap.cpp 
	$(CPP) -c $(FLAGS) FragTrap.cpp -o FragTrap.o

clean:
	$(RM) main.o ClapTrap.o ScavTrap.o FragTrap.o

fclean:clean
	$(RM) $(NAME)

re:fclean all