NAME=FIXED_POINT
CPP=c++
FLAGS= #-Wall -Wextra -Werror
RM=rm -rf
# SRC=main.cpp\
# 	Fixed.cpp\


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

re :fclean all