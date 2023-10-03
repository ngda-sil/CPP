#include "Converter.hpp"

void convertToTrueType(std::string toConvert)
{
	if (isLimits())
	{
		_type == "LIMITS";
		to
	}
	else if (isChar())
		_type == "CHAR";
	else if (isInt())
		_type == "INT";
	else if (isFloat())
		_type == "FLOAT";
	else if (isDouble())
		_type == ("DOUBLE");
	else
		{
			std::cout << RED << "Conversion impossible : unknown type\n" << RESET;
		}
}

void Converter::convert(std::string toConvert)
{
	convertToTrueType(toConvert);
		
		/*convertToTrueType(toConvert);
	explicitConvertion(toConvert);
	printConversion();*/
}