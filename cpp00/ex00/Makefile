NAME=megaphone
CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
RM= rm -rf

all :$(NAME)

$(NAME):megaphone.o
	$(CPP) $(FLAGS) megaphone.o -o $(NAME)

megapone.o:megaphone.cpp
	${CPP} -c ${FLAGS} $< -o $@


clean:
	$(RM) megaphone.o
fclean:clean
	$(RM) $(NAME)
re :fclean all