#include "Converter.hpp"

int	main(int ac, char** av)
{
	if (checkArgs(ac))
		return (1);

	Converter::convert(av[1]);
	Converter::printConversion();
	
	return(0);
}
