NAME	= BigBrain
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC		= main.cpp
OBJ		= $(SRC:.cpp=.o)
		  
# ==============================================================================


all : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -Rf $(OBJ)
fclean	: clean
	rm -Rf $(NAME)
re 		: fclean all

.PHONY: all clean fclean re
