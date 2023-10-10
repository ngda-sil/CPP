#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <sstream>
# include <cstdio>
# include <string>
#include <time.h> 

class BitcoinExchange
{
	private:
			BitcoinExchange();
			BitcoinExchange(BitcoinExchange const & rhs);
			BitcoinExchange& operator=(BitcoinExchange const & rhs);
			~BitcoinExchange();

	public:
			static  void exchange(char* dataBase, char* input);

};

int printError(std::string const & s, int i);

#endif
