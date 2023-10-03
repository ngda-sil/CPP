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
		if (!std::numeric_limits<double>::has_infinity) // inf case
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

template <typename T>
void ScalarConverter::printChar(T c)
{
	std::cout 	<< "char: '";
	
	if ( c > 0 && c < 255 && floor(c) == c)
	{
		if (!isprint(c)) 
			std::cout << "Non displayable'\n";
		else 
			std::cout << static_cast<char>(c) << "'\n";
	}
	else
		std::cout << "impossible'\n";
}

template <typename T>
void ScalarConverter::printInt(T i)
{
	std::cout 	<< "int: ";
	
		if (i >= std::numeric_limits<int>::min() && i <= std::numeric_limits<int>::max())
			std::cout << static_cast<int>(i) << "\n";
		else
			std::cout << "impossible\n";
}

template <typename T>
void ScalarConverter::printFloat(T f)
{
	std::cout	<< "float: ";
		if (f >= std::numeric_limits<float>::lowest() && f <= std::numeric_limits<float>::max())
			std::cout << std::fixed << std::setprecision(1) << static_cast<float>(f) << "\n";
		else
			std::cout << "impossible\n";
}

template <typename T>
void ScalarConverter::printDouble(T d)
{
	std::cout	<< "double: ";
		if (d >= std::numeric_limits<double>::lowest() && d <= std::numeric_limits<double>::max())
			std::cout << d << "\n";
		else
			std::cout << "impossible\n";
}


void ScalarConverter::charConv(char c)
{
	std::cout 	<< "char: '" << c << "'\n";
	printInt<char>(c);
	printFloat<char>(c);
	printDouble<char>(c);
}

void ScalarConverter::intConv(int i)
{
	printChar<int>(i);
	std::cout	<< "int: " << i << "\n";
	printFloat<int>(i);
	printDouble<int>(i);
}

void ScalarConverter::floatConv(float f)
{
	printChar<float>(f);
	printInt<float>(f);
	std::cout	<< "float: " << std::fixed << std::setprecision(1) << f << "f\n";
	printDouble<float>(f);																									
}

void ScalarConverter::doubleConv(double d)
{
	printChar<double>(d);
	printInt<double>(d);
	printFloat<double>(d);																						//The reason for the difference in the numbers is that float uses fewer bits to represent the value, which means it has a limited range and precision. When you perform the conversion, the compiler truncates the extra bits of the double value to fit it into the float representation.
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
