NAME=HARL_2.0
CPP=c++
FLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -rf
SRC=main.cpp\
	Harl.cpp

OBJ=$(subst .cpp,.o, $(SRC))

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CPP) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)
 re :clean all