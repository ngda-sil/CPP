#include "Harl.hpp"
#include <string>
#include <iostream>

int	main(int ac, char **av)
{
	Harl 		MyHarl;
	std::string	level;

	if (ac != 2)
		return (1);

	level = av[1];
	MyHarl.complain(level);

	return (0);
}
