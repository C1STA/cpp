NAME = abstract

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCPATH = src/
SRC = main.cpp \
	A_Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	WrongAnimal.cpp \
	WrongCat.cpp \
	Brain.cpp

OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

DEPDIR = dep/
DEP = $(addprefix $(DEPDIR), $(SRC:.cpp=.d))

all : $(NAME)

$(NAME): $(OBJ)
	echo "\033[36mMaking Abstract Class\033[0m"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	echo "\033[32mDone\033[0m"

$(OBJDIR)%.o : $(SRCPATH)%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -g

$(DEPDIR)%.d : $(SRCPATH)%.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -MM $< -MT $(@:.d=.o) -MF $@ -MP

-include $(DEP)

clean :
	echo "\033[35mCleaning Abstract Class objects and dependencies ...\033[0m"
	rm -rf $(OBJDIR) $(DEPDIR)
	echo "\033[32mDone\033[0m"

fclean :
	make clean
	echo "\033[35mCleaning Abstract Class program...\033[0m"
	rm -f $(NAME)
	echo "\033[32mDone\033[0m"

re : fclean
	make all

.PHONY : all clean fclean re bonus