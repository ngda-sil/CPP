#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	_nb = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

void	PhoneBook::addContact(void)
{
	_newContact.initNewContact();
	_newContact.setInfo();
	_tab[_nb] = _newContact; 
	_nb++;
	if (_nb == 8)
		_nb = 0;
}

void	PhoneBook::searchContact(void)
{
	int	ColWidth = 10;
	std::string	str;
	
	std::cout << "\nINDEX      FIRSTNAME  LASTNAME   NICKNAME\n" << "---------------------------------------------\n";
	for (int index = 0; index < 8; index++)
	{	
		std::cout << "|" << std::setw(ColWidth) << std::right << index << '|';
		for (int i = 0; i < 3; i++)
		{
			str = _tab[index].getInfo(i); 
			if (str.length() >= (unsigned long)ColWidth)
			{
				str.resize(ColWidth);
				str.replace(ColWidth - 1, 1, ".");
			}
			std::cout << std::setw(ColWidth) << std::right << str << '|';
		}
		std::cout << std::endl;
	}
	displayContact();
}

void	PhoneBook::displayContact(void)
{
	std::string	i;

	_newContact.initNewContact();
	std::cout << "Enter a index number : ";
	std::getline(std::cin, i);
	 while (i.length() != 1 || !isdigit(i[0]) || i[0] > '7')
	{
		std::cout << "Invalid input ! Enter a valid index number : ";
		std::getline(std::cin, i);
	}
	std::cout << std::endl;
	for (int j = 0; j < 5; j++)
		std::cout << _newContact.getInfo(j) << " : " << _tab[std::stoi(i, nullptr, 10)].getInfo(j) << "\n";
	std::cout<< std::endl;
}

void	welcome(void)
{
	std::cout << "██╗      ██████╗  ██████╗ █████╗ ██╗   ██╗  ██╗██████╗\n";
	std::cout << "██║     ██╔═══██╗██╔════╝██╔══██╗██║   ██║  ██║╚════██╗\n" ;
	std::cout << "██║     ██║   ██║██║     ███████║██║   ███████║ █████╔╝\n" ;
	std::cout << "██║     ██║   ██║██║     ██╔══██║██║   ╚════██║██╔═══╝ \n" ;
	std::cout << "███████╗╚██████╔╝╚██████╗██║  ██║███████╗██╗██║███████╗\n" ;
	std::cout << "╚══════╝ ╚═════╝  ╚═════╝╚═╝  ╚═╝╚══════╝╚═╝╚═╝╚══════╝\n" ;
	std::cout << "\n                  Welcome to local.42\n";
	std::cout << "\n- To add a contact type ADD\n";
	std::cout << "- To search a contact type SEARCH\n";
	std::cout << "- To exit, well, type EXIT\n\n";
}
