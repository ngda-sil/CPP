NAME		= megaphone
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC			= megaphone.cpp

# ==============================================================================


all : $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean : clean
	rm -Rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
