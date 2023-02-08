NAME	= MyAwsomePhoneBook
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic
CPP		= main.cpp \
		  PhoneBook.class.cpp \
		  Contact.class.cpp \
		  
# ==============================================================================


all : $(OBJ)
	$(CC) $(CFLAGS) $(CPP) -o $(NAME)

fclean : clean
	rm -Rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
