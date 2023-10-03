NAME		= Converter
CXX			= g++
CXXFLAGS	=  -12 -Wall -Wextra -Werror -std=c++98 -g3 -pedantic
SRC			= 	main.cpp\
				Converter.cpp\
				utils.cpp\

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
