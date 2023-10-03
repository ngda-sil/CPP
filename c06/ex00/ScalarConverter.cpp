#include "ScalarConverter.hpp"

/*void Converter::detectType()
{
	if	(convertibleToChar())
		_type = "CHAR";
	else if (convertibleToNb("INT"))
		_type = "INT";
	else if (convertibleToFloat())
	{
		if ((_l = isLimit()) && _l == FLOAT)
			_type = "LFLOAT";
		else if (_l != DOUBLE)
			_type = "FLOAT";
	}
	else if (convertibleToNb("DOUBLE"))
	{
		if ((_l = isLimit()) && _l == DOUBLE)
			_type = "LDOUBLE";
		else if (_l != FLOAT)
			_type = "DOUBLE";
	}
	return (0);
}*/
//int ScalarConverter::type = ScalarConverter::NONE;

int ScalarConverter::detectType(std::string literal)
{
	double 	d;
	char*	pEnd;

	// char
	if (literal.length() == 1 
			&& isprint(literal[0]) 
			&& !isdigit(literal[0]))
		return (CHAR);

	// int
	d = strtod(literal.c_str(), &pEnd);

	if (*pEnd == '\0' && literal.find(".") == std::string::npos)
		if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
			return (INT);
	
	// float
	if (literal.find_last_of("f") == literal.length() - 1 && !std::numeric_limits<double>::has_infinity)
	{
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
	std::cout << type << '\n';
	/*convertToTrueType();
	explicitConversion();
	printConvertion();*/
}
