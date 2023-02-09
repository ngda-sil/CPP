#include <iostream>
#include "PhoneBook.class.hpp"

int	main()
{
	std::string	input;
	PhoneBook	MyPhoneBook;

	welcome();
	while (input != "EXIT")
	{
		std::cout << "INPUT : ";
		std::getline(std::cin, input);

		if (input == "ADD")
			MyPhoneBook.addContact();
		if (input == "SEARCH")
			MyPhoneBook.searchContact();
	}
	std::cout << "Goodbye !\n";
	return (0);
}
