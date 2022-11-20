NAME=Sed_is_for_losers
CPP=c++
FLAGS=-Wall -Wextra -Werror
Rm = rm -rf



all:$(NAME)
$(NAME):main.o
	$(CPP) main.o -o $(NAME)

main.o:main.cpp
	$(CPP) -c $(FLAGS) $< -o $@ 

clean:
	$(RM) main.o

fclean:clean
	$(RM) $(NAME)

re :fclean re