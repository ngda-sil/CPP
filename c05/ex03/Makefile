NAME		= Intern
CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
SRC			=	Intern.cpp\
				PresidentialPardonForm.cpp\
				RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp \
				Bureaucrat.cpp\
				AForm.cpp\
				main.cpp\

OBJ			= $(SRC:.cpp=.o)
# ==============================================================================


all : $(NAME)
	
$(NAME)	:	$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ) 
fclean : clean
	rm -Rf $(NAME) *_shrubbery
re : fclean all

.PHONY: all clean fclean re
