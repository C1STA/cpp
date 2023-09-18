NAME = replace

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

OBJDIR = obj/
OBJ = $(addprefix $(OBJDIR), $(SRC:.cpp=.o))

DEPDIR = dep/
DEP = $(addprefix $(DEPDIR), $(SRC:.cpp=.d))

all : $(NAME)

$(NAME): $(OBJ)
	echo "\033[36mMaking replace\033[0m"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	echo "\033[32mDone\033[0m"

$(OBJDIR)%.o : %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -g

$(DEPDIR)%.d : %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -MM $< -MT $(@:.d=.o) -MF $@ -MP

-include $(DEP)

clean :
	echo "\033[35mCleaning replace objects and dependencies ...\033[0m"
	rm -rf $(OBJDIR) $(DEPDIR)
	echo "\033[32mDone\033[0m"

fclean :
	make clean
	echo "\033[35mCleaning replace program...\033[0m"
	rm -f $(NAME)
	echo "\033[32mDone\033[0m"

re : fclean
	make all

.PHONY : all clean fclean re bonus