#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <cstdio>

class BitcoinExchange
{
	private:
			static std::ifstream _ifs;
	
	public:
			BitcoinExchange();
			BitcoinExchange(BitcoinExchange const & rhs);
			BitcoinExchange& operator=(BitcoinExchange const & rhs);
			~BitcoinExchange();

			static  void exchange(char* fileName);

};

int printError(std::string const & s, int i);

#endif
