NAME = a.out

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCPATH = src/
SRC = main.cpp \
	Fixed.cpp

OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

DEPDIR = dep/
DEP = $(addprefix $(DEPDIR), $(SRC:.cpp=.d))

all : $(NAME)

$(NAME): $(OBJ)
	echo "\033[36mMaking Now we’re talking\033[0m"
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
	echo "\033[35mCleaning Now we’re talking objects and dependencies ...\033[0m"
	rm -rf $(OBJDIR) $(DEPDIR)
	echo "\033[32mDone\033[0m"

fclean :
	make clean
	echo "\033[35mCleaning Now we’re talking program...\033[0m"
	rm -f $(NAME)
	echo "\033[32mDone\033[0m"

re : fclean
	make all

.PHONY : all clean fclean re bonus