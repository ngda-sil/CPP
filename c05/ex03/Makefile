NAME		= Intern
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC			=	Intern.cpp\
				PresidentialPardonForm.cpp\
				RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp \
				Bureaucrat.cpp\
				Form.cpp\
				main.cpp\

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
