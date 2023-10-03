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
		
		char*	pEnd2;
			
		strtod(literal.c_str(), &pEnd2);
		if (*pEnd2 == '\0')
			return (FLOAT);
	}

	// double
	if (*pEnd == '\0' && errno != ERANGE)
		return (DOUBLE);

	return (NONE);
}

void ScalarConverter::charConv(char c)
{
	std::cout 	<< "char: '" << c << "'\n"
				<< "int: " << static_cast<int>(c) << "\n"
				<< "float: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f\n"
				<< "double: " << static_cast<double>(c) << std::endl;
}

void ScalarConverter::intConv(int i)
{
	std::cout 	<< "char: '";
		if ( i > 0 && i < 255)
			if (!isprint(i)) 
				std::cout << "Non displayable'\n";
			else 
				std::cout << static_cast<char>(i) << "'\n";
		else
			std::cout << "impossible'\n";
	std::cout	<< "int: " << i << "\n"
				<< "float: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f\n"
				<< "double: " << static_cast<double>(i) << std::endl;
}

void ScalarConverter::floatConv(float f)
{
	std::cout 	<< "char: '";
		if ( f > 0 && f < 255)
			if (!isprint(f)) 
				std::cout << "Non displayable'\n";
			else 
				std::cout << static_cast<char>(f) << "'\n";
		else
			std::cout << "impossible'\n";

	std::cout	<< "int: ";
			if (f >= std::numeric_limits<int>::min() && f <= std::numeric_limits<int>::max())
				std::cout << static_cast<int>(f) << "\n";
			else
				std::cout << "impossible\n";
	
	std::cout	<< "float: " << std::fixed << std::setprecision(1) << f << "f\n" // ??
				<< "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::doubleConv(double d)
{
	std::cout 	<< "char: '";
		if ( d > 0 && d < 255)
			if (!isprint(d)) 
				std::cout << "Non displayable'\n";
			else 
				std::cout << static_cast<char>(d) << "'\n";
		else
			std::cout << "impossible'\n";

	std::cout	<< "int: ";
			if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max())
				std::cout << static_cast<int>(d) << "\n";
			else
				std::cout << "impossible\n";
	
	std::cout	<< "float: ";
			if (d >= std::numeric_limits<float>::lowest() && d <= std::numeric_limits<float>::max())
				std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "\n";
			else
				std::cout << "impossible\n";

	std::cout	<< "double: ";
			if (d >= std::numeric_limits<double>::lowest() && d <= std::numeric_limits<double>::max())
				std::cout << d << "\n";
			else
				std::cout << "impossible\n";
}

void ScalarConverter::convert(std::string literal)
{
	int	type;

	type = detectType(literal);

	if (type == FLOAT)
		literal.erase(literal.length() - 1);
	
	std::istringstream iss(literal);
	
	std::cout << type << std::endl;

	switch(type)
	{
		case NONE :
        			std::cout	<< "char:    Impossible\n"
                 				<< "int:     Impossible\n"
                  				<< "float:   Impossible\n"
                 				<< "double:  Impossible\n";
        			break;

		case CHAR :
					charConv((char)literal[0]);
					break;
		case INT :
					int i;
					iss >> i;
		 			intConv(i);
					break;
		
		case FLOAT :
					float f;
					iss >> f;
					floatConv(f);
					break;
	
		case DOUBLE : 
					double d;
					iss >> d;
					doubleConv(d);
    }
}
