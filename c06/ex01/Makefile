NAME		= Serializer
CXX			= g++-12
CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror -g3 -pedantic
SRC			= 	Serializer.cpp\
				main.cpp \
				Data.cpp \

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
