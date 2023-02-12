#include "Harl.hpp"
#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	Harl 		MyHarl;
	std::string	level;

	if (ac == 2)
	{
		level = av[1];
		//if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
		//	return (1);
		MyHarl.complain(level);
		return (0);
	}
	return (1);
}
