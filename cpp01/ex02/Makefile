NAME= HI_THIS_IS_BRAIN
CPP= c++
FALGS=-Wall -Wextra -werror #-std=c++98

RM=rm -rf

SRC=main.cpp\

all: $(NAME)

$(NAME):main.o
	$(CPP) main.o -o $(NAME)

main.o:main.cpp	
	$(CPP) -c $(FLAGS) $< -o $@ 

clean :
	$(RM) main.o

fclean :clean
	$(RM) $(NAME)

re:fclean all