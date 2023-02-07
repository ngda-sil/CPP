#include "Contact.class.hpp"
#include "iostream"
#include "stdlib.h"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	std::cout << "DESTRUCTION DE CONTACT" << std::endl;
	return;
}

Contact	Contact::initContact(void)
{
	//char	buff[100];

	std::cout << "Enter first name : ";
	std::cin >> this->FirstName;
	std::cout << this->FirstName;
	/*std::cout << "Enter last name : ";
	std::cin >> this->LastName;
	std::cout << "Enter nickname : ";
	std::cin >> this->NickName;
	std::cout << "Enter phone number: ";
	std::cin >> buff;
	this->PhoneNumber = atoi(buff);
	std::cout << this->PhoneNumber << std::endl;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->DarkestSecret;
*/
	return (*this);
}

