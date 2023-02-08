#include "Contact.class.hpp"

Contact::Contact(void) 
{
	return;
}

Contact::~Contact(void)
{
	return;
}
	
void	Contact::initNewContact(void)
{
	std::string	FirstName = "FirstName";
	std::string LastName = "LastName";
	std::string NickName = "NickName";
	std::string PhoneNumber = "PhoneNumber";
	std::string DarkestSecret = "DarkestSecret";
	
	info[0] = FirstName;
	info[1] = LastName;
	info[2] = NickName;
	info[3] = PhoneNumber;
	info[4] = DarkestSecret;
}

void	Contact::setInfo(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << info[i] << " : ";
		std::getline(std::cin,info[i]);
		while (info[i].empty())
		{
			std::cout << "You must enter something ! Try again : ";
			std::getline(std::cin,info[i]);
		}
	}
}

std::string	Contact::getInfo(int i)
{
	if (i >= 0 && i <=4)
		return(info[i]);
	else
		return("Info doest exist !");
}
