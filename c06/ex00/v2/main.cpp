#include <iostream>
#include "ScalarConverter.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << RED << "Usage : ./ScalarConverter <arg1>\n" << RESET;
		return (1);
	}

	ScalarConverter::convert(av[1]);

	return (0);
}
