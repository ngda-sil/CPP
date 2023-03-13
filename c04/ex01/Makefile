NAME		= BurnTheWorld 
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC			= main.cpp \
			  Animal.cpp\
			  Dog.cpp \
			  Cat.cpp \
			  WrongAnimal.cpp \
			  WrongCat.cpp \
			  Brain.cpp
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
