#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <string>
#include "iostream"
#include "stdlib.h"
#include "signal.h"

int	main(int ac, char **av) 
{

	PhoneBook	MyPhoneBook;
	char		cmd[1000];


	if (ac == 2)
		strcpy(cmd, av[1]);
	else
		strcpy(cmd, "");
	MyPhoneBook.i = 0;
	//MyPhoneBook.initTab();	
	while (1)
	{
		if (strncmp(cmd, "EXIT", 4) == 0)
			return 0;
		if (strncmp(cmd, "SEARCH", 6) == 0)
			for(int j = 0; j < 3; j++)
					std::cout << j << "- " << MyPhoneBook.tab[j].FirstName << std::endl;
		if (strncmp(cmd, "ADD", 3) == 0)
		{
			MyPhoneBook.addContact(MyPhoneBook.i);
			MyPhoneBook.i++;
			if (MyPhoneBook.i == 2)
				MyPhoneBook.i = 0;
		}
		std::cout << MyPhoneBook.i << std::endl;
		std::cout << "J'attends ton input pelo : ";
		std::cin >> cmd;
		std::cout << cmd << std::endl;
	}
}
