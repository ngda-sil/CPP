#include "PmergeMe.hpp"

// Canonical

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

// Private Member Function

void PmergeMe::pairElements_vector()
{
	for (std::vector<int>::iterator it = v.begin(); it <= v.end() - 1; it++)
	{
		std::vector<int>::iterator it2 = it;
		if (++it2 == v.end())
		{
			pairsVector.push_back(std::make_pair(-1, *it));
			break;
		}

		pairsVector.push_back(std::make_pair(*it++, *it2));
	}
	v.clear();

	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
		std::cout << it->first << " : " << it->second << std::endl;
	
	std::cout << "--------------" << std::endl;
}

void PmergeMe::sortPairs_vector()
{
	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
		if ((it->first < it->second) && (it->first != -1) && (it->second != -1))
			std::swap(it->first, it->second);
	
	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
		std::cout << it->first << " : " << it->second << std::endl;

	std::cout << "--------------" << std::endl;
}

void PmergeMe::merge_sort_vector(std::vector<int>& arr, int left, int right)
{
	if (left < right)
	{
		if (right - left <= 5)
			insertionSort(arr);
		else
		{
			int middle = left + (right - left) / 2;
			merge_sort_vector(arr, left, middle);
			merge_sort_vector(arr, middle + 1, right);
			merge(arr, left, middle, right);
		}
	}

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

		if (iss.fail() == true)
			return(printError("Usage: ./PmergeMe <unsorted positive INTEGER sequence>", 1));
		if (i < 0)
			return(printError("Usage: ./PmergeMe <unsorted POSITIVE integer sequence>", 1));

		v.push_back(i);
		d.push_back(i);
	}
	if (std::is_sorted(v.begin(), v.end()))
		return (printError("Usage: ./PmergeMe <UNSORTED positive integer sequence>", 1));

	std::cout << "Before : ";
	for(std::deque<int>::iterator it = d.begin(); it != d.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	return (0);
}

void PmergeMe::sort_vector()
{
	clock_t time = clock();

	pairElements_vector();
	sortPairs_vector();
	merge_sort_vector();

	time = clock() - time;

	if (std::is_sorted(v.begin(), v.end()) == true)
		std::cout << GREEN << "Time to process a range of " << v.size() << " elements with std::vector : " 
				<< std::fixed << (float)time / CLOCKS_PER_SEC << " sec" << RESET << std::endl;
	return;
}


// utils

int printError(const std::string& msg, int i)
{
	std::cerr << msg << std::endl;
	return(i);
}
