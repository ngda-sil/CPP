NAME		= LaBagarre
CC			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC			= main.cpp \
			  Weapon.cpp \
			  HumanA.cpp \
			  HumanB.cpp
OBJ			= $(SRC:.cpp=.o)		  
# ==============================================================================


all : $(NAME)
	
$(NAME)	: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -Rf $(OBJ)

fclean : clean
	rm -Rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
