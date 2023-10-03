#include <iostream>
#include "Converter.hpp"

int	main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << RED << "Usage : ./Converter <arg>\n" << RESET;
		return (1);
	}

	Converter::convert(av[1]);	
	
	return(0);
}
 