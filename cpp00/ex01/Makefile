NAME=PhoneBook
CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
RM= rm -rf
SRC=main.cpp\
	PhoneBook.cpp\
	Contact.cpp\
	tools_phbook.cpp\

OBJ = $(subst .cpp,.o,$(SRC))

all : $(NAME)

$(NAME):${OBJ}
	$(CPP) $(OBJ) -o $(NAME)

%.o : %.cpp
	${CPP} -c ${FLAGS} $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
	
re :fclean all