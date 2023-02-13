#include "Harl.hpp"

Harl::Harl()
{
	return;
}

Harl::~Harl()
{
	return;
}

void	Harl::complain(std::string level)
{
	std::string tab[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl:: *f[])(void) = 
	{ 
		&Harl::_debug, 
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};

	int			i = -1;
	
	while (++i < 4)
		if (tab[i] == level)
			break;
	
	switch(i)
	{
		case 0 :
				std::cout << "[ " << tab[0] << " ]\n"; 
				(this->*f[0])();
				std::cout << std::endl; 
		case 1 :
				std::cout << "[ " << tab[1] << " ]\n"; 
				(this->*f[1])();
				std::cout << std::endl; 
		case 2 :
				std::cout << "[ " << tab[2] << " ]\n"; 
				(this->*f[2])();
				std::cout << std::endl; 
		case 3 :
				std::cout << "[ " << tab[3] << " ]\n"; 
				(this->*f[3])();
				std::cout << std::endl; 
				break;
		default :
		   std::cout <<  "[ Probably complaining about insignificant problems ]\n";
	}
}

void	Harl::_debug()
{
	std::cout << "1) On est sur du petit debug tranquille\n";
}

void	Harl::_info()
{
	std::cout << "2) Heu pourquoi ca fait des trucs bizarres la\n";
}

void	Harl::_warning()
{
	std::cout << "3) OULALALALALALA, faut faire attention\n";
}

void	Harl::_error()
{
	std::cout << "4) AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\n";
}
