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
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl:: *f[])(void) = 
	{ 
		&Harl::_debug, 
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};
	
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*f[i])();
}

void	Harl::_debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n";
}

void	Harl::_info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void	Harl::_warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month\n";
}

void	Harl::_error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}
