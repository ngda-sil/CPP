#include "converter.hpp"

int	checkArgs(int ac)
{
	if (ac != 2)
	{
		std::cerr << RED << "Wrong number of arguments !" << RESET << std::endl;
		return (1);
	}
	return (0);
}
