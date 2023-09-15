#include "convert.hpp"

int main(int ac, char** av)
{
	t_struct		ct;

	if (checkArgs(ac))
		return(0);
	
	std::string		input = av[1];

	ct.type = detectType(input);
	if (ct.type == 1)
		return (1);

	convertToRealType(ct.type, input, &ct);
	explicitConversion(ct.type, &ct);
	printConversion(ct);

	return (0);
}
