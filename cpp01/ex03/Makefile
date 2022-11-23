NAME=Unnecessary_violence
CPP=c++
FALGS=-Wall -Wextra -Wall -std=c++98
RM= rm -rf
SRC=main.cpp\
	 Weapon.cpp\
	 HumanA.cpp\
	 HumanB.cpp\

OBJ=$(subst .cpp,.o,$(SRC))

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(OBJ) -o $(NAME)
%.o:%.cpp
	$(CPP) -c $(FLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all

# Resources :
# Notes : that $< is patterned to match prerequisites and $@ matches the target
# this site explaint it :
# https://unix.stackexchange.com/questions/116547/what-do-and-in-a-makefile-mean
# Still need to understand what $< -o $@ means well 
# $@ is:

# The file name of the target of the rule. If the target is an archive member, then ‘$@’ is the name of the archive file. In a pattern rule that has multiple targets (see Introduction to Pattern Rules), ‘$@’ is the name of whichever target caused the rule's recipe to be run.

# $< is:

# The name of the first prerequisite. If the target got its recipe from an implicit rule, this will be the first prerequisite added by the implicit rule.