NAME	= Sed4Winner
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC		= main.cpp 
OBJ		= $(SRC:.cpp=.o)
# ==============================================================================


all : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -Rf $(NAME)
	rm *.replace
re : fclean all

.PHONY: all clean fclean re
