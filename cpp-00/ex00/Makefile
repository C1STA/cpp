NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	echo "\033[36mMaking megaphone\033[0m"
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	echo "\033[32mDone\033[0m"

%.o : %.c
	$(CC) $(CFLAGS) -c $^ -g

clean :
	echo "\033[35mCleaning megaphone's objects ...\033[0m"
	rm -f $(OBJ)
	echo "\033[32mDone\033[0m"

fclean :
	make clean
	echo "\033[35mCleaning megaphone ...\033[0m"
	rm -f $(NAME)
	echo "\033[32mDone\033[0m"

re : fclean
	make all

.PHONY : all clean fclean re bonus