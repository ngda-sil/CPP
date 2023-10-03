#include "ScalarConverter.hpp"
int ScalarConverter::detectType(std::string literal)
{
	char*	pEnd;
	double 	d = strtod(literal.c_str(), &pEnd);;

	// char
	if (literal.length() == 1 && isprint(literal[0]) && !isdigit(literal[0]))
		return (CHAR);

	// int
	if (*pEnd == '\0' && literal.find(".") == std::string::npos)
		if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
			return (INT);
	
	// float
	if (literal.find_last_of("f") == literal.length() - 1)
	{
		if (!std::numeric_limits<double>::has_infinity)
			return (DOUBLE);

		literal.erase(literal.length() - 1);
			
		double 	d2;
		char*	pEnd2;
			
		d2 = strtod(literal.c_str(), &pEnd2);
		if (*pEnd2 == '\0')
			return (FLOAT);
	}

	// double
	if (*pEnd == '\0' && errno != ERANGE)
		return (DOUBLE);

	return (NONE);
}


void ScalarConverter::convert(std::string literal)
{
	int	type;

	type = detectType(literal);

	std::cout << type << std::endl;
	/*convertToTrueType();
	explicitConversion();
	printConvertion();*/
}
