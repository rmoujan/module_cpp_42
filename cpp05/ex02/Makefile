NAME=EX02
CPP=c++
FALGS= -Wall -Wextra -Werror -std=c++98  #-fsanitize=address
RM=rm -rf

SRC=Bureaucrat.cpp\
	Form.cpp\
	PresidentialPardonForm.cpp\
	main.cpp\
	RobotomyRequestForm.cpp\
	ShrubberyCreationForm.cpp\

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
