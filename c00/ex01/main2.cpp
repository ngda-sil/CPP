#include <iostream>
#include <cstring>
#include <iomanip>

class	Contact
{
	public:
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;

		void	setString(std::string AString)
		{
			
			for (int i = 0; AString[i]; i++)
			{
				if (!isalpha(AString[i]))
				{
					std::cout << "Non valid Name : Letters only\nTry again : ";
					std::cin >> AString;
					i = 0;	
					continue;
				}
			}
			FirstName = AString;
		}

		std::string	getString(void)
		{
			std::string AString = FirstName;
			return (AString);
		}
	private:
		std::string	FirstName;
	};

class	PhoneBook
{
	public:
		std::string	buf;
		Contact	tab[8];
		void	addContact(int i)
		{
			std::cout << "Enter first name : ";
			std::cin >> buf;
			tab[i].setString(buf);
			std::cout << "Enter last name : ";
			std::cin >> tab[i].LastName;
			std::cout << "Enter nickname : ";
			std::cin >> tab[i].NickName;
			std::cout << "Enter phone number : ";
			std::cin >> tab[i].PhoneNumber;
			std::cout << "Enter darkest secret : ";
			std::cin >> tab[i].DarkestSecret;
		}
};

void	welcome()
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

int	main() 
{
	int		i = 0;
	int   		index;
	std::string	input;
	PhoneBook	MyPhoneBook;

	welcome();
	while (1)
	{
		if (input == "EXIT")
			return 0;
		if (input == "SEARCH")
		{
			std::cout << std::right;
			std::cout << std::setw(10) << "index|";
			std::cout << std::setw(10) << "first name|";
			std::cout << std::setw(10) << "last name|";
			std::cout << std::setw(10) << "nickname|\n";

			for (int j = 0; j < 8; j++)
			{
				std::cout << std::setw(10) << j << "|";
				std::cout << std::setw(10) << MyPhoneBook.tab[j].getString().substr(0, 9) << "|";
				std::cout << std::setw(10) << MyPhoneBook.tab[j].LastName.substr(0, 9) << "|";
						std::cout << std::setw(10)  << MyPhoneBook.tab[j].NickName.substr(0, 9) << "|\n";
					}
					std::cout << "Enter contact index number : ";
					std::cin >> index;
					if (index < 9 && index >= 0) 
					{
						std::cout << "Name : " << MyPhoneBook.tab[index].getString() << std::endl;
						std::cout << "Last name : " << MyPhoneBook.tab[index].LastName << std::endl;
						std::cout << "Nickname : " << MyPhoneBook.tab[index].NickName << std::endl;
						std::cout << "Phone number : " << MyPhoneBook.tab[index].PhoneNumber << std::endl;
						std::cout << "Darkest secret : " << MyPhoneBook.tab[index].DarkestSecret << std::endl;
					}
				}
				if (input == "ADD")
				{
					MyPhoneBook.addContact(i++);;
					if (i == 8)
						i = 0;
				}
				std::cout << "INPUT : ";
				std::cin >> input;
			}
		}
