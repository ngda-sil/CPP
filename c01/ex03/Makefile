NAME	= LaBagarre
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC		= main.cpp \
		  Weapon.cpp \
		  HumanA.cpp \
		  HumanB.cpp 
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
