#include <iostream>
#include "PhoneBook.hpp"

int	main()
{
	int		eof = 0;
	std::string	input;
	PhoneBook	MyPhoneBook;

	welcome();
	while (input != "EXIT")
	{
		std::cout << "INPUT : ";
		if (!std::getline(std::cin, input))
			break;

		if (input == "ADD")
			MyPhoneBook.addContact();
		if (input == "SEARCH")
			MyPhoneBook.searchContact();
	}
	std::cout << "Goodbye !\n";
	return (0);
}
