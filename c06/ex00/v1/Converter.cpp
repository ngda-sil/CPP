#include "Converter.hpp"

// Canonical
std::string Converter::_limits[] = {"inf", "+inf", "-inf", "nan", "+inff", "-inff", "nanf"};

Converter::Converter(void) : _type("Undefined"), _c('0'), _i(0), _f(0), _d(0)
{
}

Converter::Converter(const Converter& rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_toConvert = rhs._toConvert;

		_c = rhs._c;
		_i = rhs._i;
		_f = rhs._f;
		_d = rhs._d;
	}
	//std::cout << "Copy constructor : " << *this << std::endl;
}

Converter& Converter::operator=(const Converter& rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
		_toConvert = rhs._toConvert;

		_c = rhs._c;
		_i = rhs._i;
		_f = rhs._f;
		_d = rhs._d;
	}
	//std::cout << "Assignment copy : " << *this << std::endl;

	return(*this);
}

Converter::~Converter(void)
{
}

// Getter

std::string	Converter::getType() const
{
	return (_type);
}

std::string Converter::getToConvert() const
{
	return (_toConvert);
}

char Converter::getChar() const
{
	return (_c);
}

int	Converter::getInt() const
{
	return (_i);
}

float Converter::getFloat() const
{
	return (_f);
}

double Converter::getDouble() const
{
	return (_d);
}

// Setter

void Converter::setType(std::string type)
{
	_type = type;
}

int Converter::setToConvert(std::string str)
{
	if (str.length())
	{
		for (size_t i = 0; i < str.length(); i++)
			str[i] = tolower(str[i]);
		_toConvert = str;
		return (0);
	}
	else 
	{
		std::cerr << RED << "NULL char* cannot initialize _toConvert" << RESET << std::endl;
		return (1);
	}
}
// Public Member Functions

void Converter::convert(std::string toConvert)
{
	if (setToConvert(toConvert))
		return;
	detectType();
	convertToTrueType();
	explicitConversion();
}

void Converter::printConversion() const
{
	if (_type == "Undefined")
		return;
	printChar();
	printInt();
	printFloat();
	printDouble();
}

// Private Member Functions

bool Converter::convertibleToChar() const
{
	if (_toConvert.length() == 1)
		if (!isdigit(_toConvert[0]))
			if (isprint(_toConvert[0]))
				return (true);
	return (false);
}

bool Converter::convertibleToFloat() const
{
	try
	{
		size_t pos;

		if (_toConvert.back() == 'f')
		{
			std::stof(_toConvert.substr(0, _toConvert.length()-1), &pos);
			if (pos == _toConvert.length() - 1)
				return(true);
		}
		return (false);
	}
	catch(const std::out_of_range& e)
	{
		//std::cerr << RED << e.what() << RESET << std::endl;
		return (false);
	}
	catch(const std::invalid_argument e)
	{
		//std::cerr << RED << e.what() << RESET << std::endl;
		return (false);
	}
}

bool Converter::convertibleToNb(const std::string type) const
{
	try
	{
		size_t pos = 0;

		if (type == "INT")
			std::stoi(_toConvert, &pos);
		else  if (type == "DOUBLE")
			std::stod(_toConvert, &pos);

		if (pos == _toConvert.length())
			return(true);
		else
			return(false);
	}
	catch(const std::out_of_range& e)
	{
		//std::cerr << RED << e.what() << RESET << std::endl;
		return (false);
	}
	catch(const std::invalid_argument e)
	{
		//std::cerr << RED << e.what() << RESET << std::endl;
		return (false);
	}
}

int Converter::isLimit() const
{

	for (int i = 0; i < 4; i++)	
		if (_toConvert == _limits[i])
			return (DOUBLE);

	for (int i = 4; i < 7; i++)	
		if (_toConvert == _limits[i])
			return (FLOAT);

	return (0);

}

int Converter::detectType()
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
}

void Converter::convertToTrueType()
{
	if (_type == "CHAR")
		_c = static_cast<char>(_toConvert[0]);
	else if (_type == "INT")
		_i = std::stoi(_toConvert);
	else if (_type == "FLOAT")
		_f = std::stof(_toConvert);
	else if (_type == "DOUBLE")
		_d = std::stod(_toConvert);
}

void Converter::explicitConversion()
{
	switch (_type[0])
	{
	case 'C':
		_i = static_cast<int>(_c);
		_f = static_cast<float>(_c); 
		_d = static_cast<double>(_c); 
		break;
	
	case 'I':
		_c = static_cast<char>(_i);
		_f = static_cast<float>(_i); 
		_d = static_cast<double>(_i); 
		break;
	
	case 'F':
		_c = static_cast<char>(_f);
		_i = static_cast<int>(_f); 
		_d = static_cast<double>(_f); 
		break;
	
	case 'D':
		_c = static_cast<char>(_d);
		_i = static_cast<int>(_d); 
		_f = static_cast<float>(_d);
		break;

	case 'L':
		break;
	
	case 'U':
		std::cout << RED << "Conversion not possible : Undefinable type\n" << RESET;
		break;
	}	
}

// print

void	Converter::printChar() const
{
	std::cout << "char: "; 
	
	if (_l == DOUBLE || _l == FLOAT)
		std::cout << "Impossible";
	else if (!isprint(_c))
		std::cout << "Non displayable";
	else
		std::cout << _c;

	std::cout << std::endl;
}

void	Converter::printInt() const
{
	std::cout << "int: "; 
	
	if (_l == DOUBLE || _l == FLOAT)
		std::cout << "Impossible";
	else
		std::cout << _i;

	std::cout << std::endl;
}

void	Converter::printFloat() const
{
	std::cout << "float: ";
	
	if (_l == FLOAT)
		std::cout << _toConvert;
	else if (_l == DOUBLE)
		std::cout << _toConvert << "f";
	else
		std::cout<< std::setprecision(1) << std::fixed << _f << "f";
	
	std::cout << std::endl;
}

void	Converter::printDouble() const
{
	std::cout << "double: ";
	
	if (_l == FLOAT)
		std::cout <<  _toConvert.substr(0, _toConvert.length()-1);
	else if (_l == DOUBLE)
		std::cout << _toConvert;
	else
		std::cout<< std::setprecision(1) << std::fixed << _d;
	
	std::cout << std::endl;
}

// ostream

std::ostream& operator<<(std::ostream& o, Converter const &c)
{
	o 	<< " type : " << c.getType()
		<< " to convert : " << c.getToConvert()
		<< " char : " << c.getChar() 
		<< " int : " << c.getInt() 
		<< " float : " << c.getFloat() 
		<< " double : " << c.getDouble();

	return (o);
}

