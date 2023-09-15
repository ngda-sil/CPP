#include "converter.hpp"

int	main(int ac, char** av)
{
	Converter c;

	if (checkArgs(ac))
		return (1);

	c.convert(av[1]);
	std::cout << c << std::endl;
	c.printConversion();
	
	return(0);
}
