#include "PmergeMe.hpp"

// Canonical

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

// Private Member Function

void PmergeMe::pairElements()
{
	for (std::vector<int>::iterator it = v.begin(); it <= v.end() - 1; it++)
	{
		std::vector<int>::iterator it2 = it;

		if (++it2 == v.end())
		{
			pairs.push_back(std::make_pair(-1, *it));
			break;
		}

		pairs.push_back(std::make_pair(*it++, *it2));
	}
	v.clear();
	// for (std::vector<std::pair<int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
	// std::cout << "--------------" << std::endl;
}

void PmergeMe::sortPairs()
{
	for (std::vector<std::pair<int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++)
		if ((it->first < it->second) && (it->first != -1) && (it->second != -1))
			std::swap(it->first, it->second);

	std::sort(pairs.begin(), pairs.end() - 1);

	// for (std::vector<std::pair<int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
}

void PmergeMe::mergeLarger()
{
	for (std::vector<std::pair<int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if (it->first != -1)
			v.push_back(it->first);
	}
	v.insert(v.begin(), pairs.begin()->second);
	// std::cout << "Vector : ";
	// for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
	// 	std::cout << *it << " | ";
	// std::cout << std::endl;
}

void PmergeMe::mergeSmaller()
{
	int i = 0;
	int newtmp;
	int tmp = i;
	int j = 2;
	int jacob = 0;
	int size = pairs.size();

	while (jacob < size)
	{
		jacob = pow(2, j);
		if (jacob >= size)
			i = size - 1;
		else 
		{
			i = jacob;
		}
		newtmp = i;
		while (i > tmp)
		{
			v.insert(std::lower_bound(v.begin(), v.end(), pairs[i].second), pairs[i].second);
			i--;
		}
		tmp = newtmp;
		j++;
	}
	std::cout << "Vector : ";
	for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
		std::cout << *it << " | ";
	std::cout << " SIZE : " << v.size() << std::endl;
}

// Public Member Function

int	PmergeMe::parseElements(char** av)
{
	std::string 		values;
	std::istringstream	iss;
	int 				i;

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
	if (std::is_sorted(v.begin(), v.end()))
		return (1);
	std::cout << "Vector : ";
	for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
	return (0);
}

void PmergeMe::sort()
{
	time = clock();
	pairElements();
	sortPairs();
	mergeLarger();
	mergeSmaller();
	time = clock() - time;
	if (std::is_sorted(v.begin(), v.end()))
		std::cout << "Time to process a range of " << v.size() << " elements with std::[..] : " << (float)time / CLOCKS_PER_SEC << " sec"<< std::endl;
	return;
}

// utils

int printError(const std::string& msg, int i)
{
	std::cerr << msg << std::endl;
	return(i);
}
