NAME	= Harl_2.0
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC		= main.cpp \
		  Harl.cpp
OBJ		= $(SRC:.cpp=.o)
# ==============================================================================


all : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -Rf $(NAME)
re : fclean all

.PHONY: all clean fclean re
