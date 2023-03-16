NAME = btc
CPP=c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC= main.cpp\
	BitcoinExchange.cpp\

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