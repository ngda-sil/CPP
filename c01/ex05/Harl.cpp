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
	
	for (int i = 0; i < 4; i++)
		if (tab[i] == level)
			(this->*f[i])();
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
