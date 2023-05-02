NAME		= Interface 
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 -pedantic
SRC			= main.cpp \
			  AMateria.cpp\
			  Character.cpp\
			  Cure.cpp\
			  Ice.cpp\
			  MateriaSource.cpp
OBJ			= $(SRC:.cpp=.o)
# ==============================================================================


all : $(NAME)
	
$(NAME)	:	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean : 	
	rm -f $(OBJ)
fclean : clean
	rm -Rf $(NAME)
re : fclean all

.PHONY: all clean fclean re
