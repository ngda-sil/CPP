#include "BitcoinExchange.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
		return(printError("Usage : ./btc <file>"), 1);

	BitcoinExchange::exchange([av1]);

	return (0);
}
