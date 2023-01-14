NAME=ADVANCED
CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98 #-Wshadow -Wno-shadow 
RM=rm -rf


all:$(NAME)

$(NAME) : main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o
	$(CPP) main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o -o $(NAME)

main.o : main.cpp 
	$(CPP) -c $(FLAGS) main.cpp  -o main.o

ClapTrap.o : ClapTrap.cpp 
	$(CPP) -c $(FLAGS) ClapTrap.cpp -o ClapTrap.o

ScavTrap.o : ScavTrap.cpp 
	$(CPP) -c $(FLAGS) ScavTrap.cpp -o ScavTrap.o

FragTrap.o : FragTrap.cpp 
	$(CPP) -c $(FLAGS) FragTrap.cpp -o FragTrap.o

DiamondTrap.o : DiamondTrap.cpp 
	$(CPP) -c $(FLAGS) DiamondTrap.cpp -o DiamondTrap.o

clean:
	$(RM) main.o ClapTrap.o ScavTrap.o FragTrap.o DiamondTrap.o

fclean:clean
	$(RM) $(NAME)

re:fclean all