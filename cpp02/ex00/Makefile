NAME = Orthodox_Canonical
CPP = c++
FLAGS = #-Wall -Wextra -Werror -std=c++98
RM = rm -rf


all:$(NAME)

$(NAME):main.o Fixed.o
	$(CPP) main.o Fixed.o -o $(NAME)

main.o : main.cpp
	$(CPP) -c $(FLAGS) main.cpp -o main.o

Fixed.o:Fixed.cpp
	$(CPP) -c $(FLAGS) Fixed.cpp -o Fixed.o

clean:
	$(RM) main.o Fixed.o

fclean:clean
	$(RM) $(NAME)

re:fclean all
