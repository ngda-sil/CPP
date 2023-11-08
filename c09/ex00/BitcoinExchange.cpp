#include "BitcoinExchange.hpp"

std::map<std::string, float>  BitcoinExchange::_database;															// forward declaration otherwise linkage problem

// Private member function

int BitcoinExchange::errorManagement(float rate, std::string date, char* lastChar, std::istringstream& fail)
{
	std::string s;

	if (fail.fail() == 1 || fail.eof() == false)
		s = "bad format";
	else if (rate < 0)
			s = "not a positive number";
	else if (rate > 1000)
			s = "too large a number";
	else if (lastChar == NULL || lastChar[0] != 0)
			s = "bad input => " + date;
	if (s.empty() == false)
	{
		std::cerr << "Error : " + s << std::endl;
		return (1);
	}
	return (0);
}

void BitcoinExchange::exctractData(char* file, int action)
{
	std::ifstream 		ifs(file, std::ifstream::in);
	std::istringstream	iss;
	std::string 		date;
	float 				rate;
	struct tm 			tp;
	std::map<std::string, float>::iterator it;
	char* 				lastChar;

	if (ifs.fail() == true)
	{
		std::cerr << "Error : " << strerror(errno) << std::endl;
		return;
	}

	for (std::string line; getline(ifs, line);)
	{
		date = line.substr(0, line.find("|") - 1);
		iss.str(line.substr(line.find("|") + 1, std::string::npos));
		iss.clear();																								// to clear eofbit state 
		iss >> rate;

		if (action == MAP)
			_database.insert(std::pair<std::string, float> (date, rate));
		
		if (action == CONVERT)
		{
			lastChar = strptime(date.c_str(), "%Y-%m-%d", &tp);													// On successful completion, the strptime() function returns a pointer to the character following the last character parsed. Otherwise, a null pointer is returned.
			if (errorManagement(rate, date, lastChar, iss))
				continue;
			it = _database.find(date);
			if (it == _database.end())
			{
				it = _database.lower_bound(date);
				if (it != _database.begin())
					--it;
			}
			std::cout << CYAN << date << " => " << std::fixed << std::setprecision(5) 
				<< it->second * rate << RESET << std::endl;
		}
	}
}

//Public member function

void BitcoinExchange::exchange(char* databaseFile, char* inputFile)
{	
	exctractData(databaseFile, MAP);
	exctractData(inputFile, CONVERT);
}
