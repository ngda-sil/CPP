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
		std::string date = line.substr(0, line.find("|") - 1);
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
		std::istringstream isd(line.substr(0, line.find("|") - 1));
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
			std::cerr << "Error : too large a number" << std::endl;
			continue;
		}
		
		struct tm tp;
		if (!strptime(line.substr(0, line.find("|") - 1).c_str(), "%Y-%m-%d", &tp))
			std::cout << "Error : bad input => " << isd.str() << std::endl;

		else
		{ 
			if (data.find(isd.str())->second)
				std::cout << isd.str() << " => " << data.find(isd.str())->second * rate << std::endl;
			else
			{
				
				std::map<std::string, float>::iterator it = data.lower_bound(isd.str());
				it--;
				//std::cout << isd.str() << " => " << data.find(isd.str())->second * it->second << std::endl;			
			}
		}
	}



}

// extern

int printError(std::string const & s, int i)
{
	std::cerr << "Error : " + s << std::endl;
	return (i);
}
