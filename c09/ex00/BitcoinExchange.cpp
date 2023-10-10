#include "BitcoinExchange.hpp"

//Public member function

void BitcoinExchange::exchange(char* dataBase, char* input)
{	
	std::ifstream ifsDataBase(dataBase);
	std::ifstream ifsInput(input);
	std::map<std::string, float>  data;

	if (ifsDataBase.fail() || ifsInput.fail())
	{
		std::cerr << "Error : " << strerror(errno);
		return;
	}
	// extract data from data base
	for (std::string line; getline(ifsDataBase, line);)
	{
		std::string date = line.substr(0, line.find("|") - 2);
		std::istringstream iss(line.substr(line.find("|") + 2, std::string::npos));
		float rate;
		iss >> rate;
		//std::cout << line << std::endl;
		//std::cout << "Date : " << date << " rate : " << rate << std::endl;
		data.insert(std::pair<std::string, float> (date, rate));
	}
	// convert from input and print
	for (std::string line; getline(ifsInput, line);)
	{
		std::string date = line.substr(0, line.find("|") - 2);
		std::istringstream iss(line.substr(line.find("|") + 2, std::string::npos));
		float rate;
		iss >> rate;
		// error management
		if (rate < 0)
		{
			std::cerr << "Error : not a positive number" << std::endl;
			continue; 
		}
		if (rate > 1000)
		{
			std::cerr << "Error : number > 1000" << std::endl;
			continue;
		}
			
	}



}

// extern

int printError(std::string const & s, int i)
{
	std::cerr << "Error : " + s << std::endl;
	return (i);
}
