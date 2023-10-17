#include "PmergeMe.hpp"

// Canonical

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

// Private Member Function

void PmergeMe::pairElements()
{
	int	half = v.size() / 2;

	for (std::vector<int>::iterator it = v.begin(); it < v.begin() + half ; it += 2)
		std::make_pair<std::vector<int>::iterator, std::vector<int>::iterator> (it, ++it);

	std::cout << *v.begin() << *v.begin().second << std::endl;
}

// Public Member Function

int	PmergeMe::parseElements(char** av)
{
	std::string 		values;
	std::istringstream	iss;
	int 		i;

	// get values
	for(int i = 1; av[i]; i++)
		values = values + " " + av[i];

	iss.str(values);

	// check if positive int + push_back() 
	while (iss.eof() == false)
	{
		iss >> i;
		if (iss.fail() == true || i < 0)
			return(1);

		v.push_back(i);
		d.push_back(i);
	}
	return (0);
}

void PmergeMe::sort()
{
	pairElements();
	return;
}

// utils

int printError(const std::string& msg, int i)
{
	std::cerr << msg << std::endl;
	return(i);
}
