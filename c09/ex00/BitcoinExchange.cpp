#include "BitcoinExchange.hpp"

//canonical
BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{
		
	}
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this != &rhs)
	{

	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

//Public member function

void BitcoinExchange::exchange(char* fileName)
{
	_ifs.open(fileName);

	if (_ifs.fail())
		return (printError(strerror(errno), 0).        );
	
	for (std::string line; getline(_ifs, line);)
	{
		line.
	}

}

// extern

int printError(std::string const & s, int i)
{
	std::cerr << "Error : " + s << std::endl;
	return (i);
}
