#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <sstream>

# define RESET   "\033[0m"
# define CYAN 	"\033[36m"

# define MAP 		0
# define CONVERT	1

class BitcoinExchange
{
	private:
			BitcoinExchange();
			BitcoinExchange(BitcoinExchange const & rhs);
			BitcoinExchange& operator=(BitcoinExchange const & rhs);
			~BitcoinExchange();

			static std::map<std::string, float>  _database;

			static	void exctractData(char* file, int action);
			static 	int errorManagement(float rate, std::string date, char* lastChar, std::istringstream& fail);
	public:
			static	void exchange(char* databaseFile, char* inputFile);



};

#endif
