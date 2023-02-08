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
	std::string 	LastName = "LastName";
	std::string 	NickName = "NickName";
	std::string 	PhoneNumber = "PhoneNumber";
	std::string	DarkestSecret = "DarkestSecret";
	
	_info[0] = FirstName;
	_info[1] = LastName;
	_info[2] = NickName;
	_info[3] = PhoneNumber;
	_info[4] = DarkestSecret;
}

void	Contact::setInfo(void)
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << _info[i] << " : ";
		std::getline(std::cin,_info[i]);
		while (_info[i].empty())
		{
			std::cout << "You must enter something ! Try again : ";
			std::getline(std::cin,_info[i]);
		}
	}
}

std::string	Contact::getInfo(int i)
{
	if (i >= 0 && i <=4)
		return(_info[i]);
	else
		return("Info does'nt exist !");
}
