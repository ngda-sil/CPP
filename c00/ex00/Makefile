NAME		= megaphone
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)
# ==============================================================================


all	: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -f $(OBJ)
fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
