#include "PhoneBook.class.hpp"
#include "iostream"
#include "Contact.class.hpp"

PhoneBook::PhoneBook(void) 
{
	return;
}

PhoneBook::~PhoneBook(void) 
{
	return;
}

/*Contact*	PhoneBook::initTab(void)
{
	contacts = new tab;
	std::cout << "tab init" << std::endl;
	return(contacts);	
}*/

void	PhoneBook::addContact(int i)
{
	//tab[i] = initContact();
	std::cout << "Enter first name : ";
	std::cin >> tab[i].FirstName;
	std::cout << tab[i].FirstName;
	return;
}
