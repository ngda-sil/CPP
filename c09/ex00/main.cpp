#include "BitcoinExchange.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 3)
		return(printError("Usage : ./btc <data base> <input>", 1));

	BitcoinExchange::exchange(av[1], av[2]);

	return (0);
}
