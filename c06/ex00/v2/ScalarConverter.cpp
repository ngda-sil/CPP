#include "ScalarConverter.hpp"

std::string ScalarConverter::_limits[LIMITS] = {"inf", "+inf", "-inf", "nan", "inff", "+inff", "-inff", "nanf"};

std::string ScalarConverter::toLowerString(std::string s)
{
	for (int i = 0; s[i]; i++)
		s[i] = tolower(s[i]);

	return(s);
}

void ScalarConverter::explicitConversionAndPrint(std::string toConvert, int type)
{
	char 	c;
	int		i;
	const char* str;

	switch (type)
	{
		case LIMIT_D:
		{
			std::cout << "char: Impossible\nint: impossible\nfloat: " << toConvert << "f\n double: " << toConvert << std::endl;
			exit(0);
		}
		case LIMIT_F:
		{
			std::cout << "char: Impossible\nint: impossible\nfloat: " << toConvert << "\n double: " << toConvert.substr(0, toConvert.length()-1) << std::endl;
			exit(0);
		}
		case CHAR:
		{
			c = toConvert[0];
			std::cout << "char: '" << c << "'\nint: " << static_cast<int>(c) << "\nfloat: " << std::setprecision(1) << std::fixed << static_cast<float>(c) << "f\ndouble: " << static_cast<double>(c) << std::endl;
			exit(0);
		}
		case INT:
		{
			str = toConvert.c_str();
			i = std::atoi(str);
			c =  static_cast<char>(i);
		
			std::cout << "char: '";
			if (!isprint(i)) 
				std::cout << "Non displayable";
			else 
			{
				std::cout << c;
			}
			std::cout << "'\nint: " << i << "\nfloat: " << std::setprecision(1) << std::fixed << static_cast<float>(i) << "f\ndouble: " << static_cast<double>(i) << std::endl;
			exit(0);
		}
		case FLOAT:
		{
			const char* str2 = toConvert.c_str();
			float f = std::atof(str2);
			c =  static_cast<char>(f);
		
			std::cout << "char: '";
			if (!isprint(f)) 
				std::cout << "Non displayable";
			else 
			{
				std::cout << c;
			}
			std::cout << "'\nint: ";
			if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
				std::cout << "Impossible";
			else 
			{
				std::cout << static_cast<int>(f);
			}
			std::cout << "\nfloat: " << std::setprecision(1) << std::fixed << f << "f\ndouble: " << static_cast<double>(f) << std::endl;
			exit(0);
		}
		case DOUBLE:
		{
			const char* str3 = toConvert.c_str();
			float f = std::atof(str3);
			c =  static_cast<char>(f);
		
			std::cout << "char: '";
			if (!isprint(f)) 
				std::cout << "Non displayable";
			else 
			{
				std::cout << c;
			}
			std::cout << "'\nint: ";
			if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max())
				std::cout << "Impossible";
			else 
			{
				std::cout << static_cast<int>(f);
			}
			std::cout << "\nfloat: " << std::setprecision(1) << std::fixed << static_cast<float>(f) << "f\ndouble: " << f << std::endl;
			exit(0);
		}
	}
}

void ScalarConverter::limits(std::string toConvert)
{
	std::string l = toLowerString(toConvert);

	for (int j = 0; j < LIMITS; j++)
	{
		if (l == _limits[j])
		{
			if (j < 3)
				explicitConversionAndPrint(l, LIMIT_D);
			explicitConversionAndPrint(l, LIMIT_F);
		}
	}


}

void ScalarConverter::toChar(std::string toConvert)
{
	if (toConvert.length() == 1)
		if (!isdigit(toConvert[0]))
			if (isprint(toConvert[0]))
				explicitConversionAndPrint(toConvert, CHAR);
}

void ScalarConverter::toInt(std::string toConvert)
{

	const char* str = toConvert.c_str();
	if (toConvert[0] == '+')
				toConvert.erase(0,1);
	double d = std::atof(str);
	int i = std::atoi(str);

	char buffer[30];

	sprintf(buffer, "%d", i);

	std::string afterAtoi(buffer); // constructeur de std::string

	if ((double)i == d && (toConvert.length() == afterAtoi.length()))
		explicitConversionAndPrint(toConvert, INT);
}

bool ScalarConverter::toDouble(std::string toConvert)
{
	char* ptdEnd;

		if (toConvert[0] == '+')
				toConvert.erase(0,1);
		const char* str = toConvert.c_str();

		std::strtod(str, &ptdEnd);

		std::cout << strlen(str) << toConvert.length() << str << std::endl;

		if (ptdEnd == 0)
			return(true);
		else
			return(false);
}

void ScalarConverter::toFloat(std::string toConvert)
{
	size_t needle = toConvert.find('f');
	if (needle == toConvert.length() - 1)
	{
		size_t needle2 = toConvert.find('.');
		if ((needle2 != std::string::npos) && (needle2 < needle))
		{
			toConvert = toConvert.erase(needle);
			if (toDouble(toConvert) == true)
				explicitConversionAndPrint(toConvert, FLOAT);
		}
	}	
}

void ScalarConverter::convert(std::string toConvert)
{	
	limits(toConvert);
	toChar(toConvert);
	toInt(toConvert);
	toFloat(toConvert);
	if (toDouble(toConvert) == false)
		std::cout << "literal non convertible\n";
	else 
		explicitConversionAndPrint(toConvert, DOUBLE);

}
