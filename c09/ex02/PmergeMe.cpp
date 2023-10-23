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


void PmergeMe::mergeSort_vector(std::vector<std::pair<int, int> >::iterator begin, std::vector<std::pair<int, int> >::iterator end)
{
	//base case 
	ptrdiff_t distance = std::distance(begin, end);
	if (distance <= 1)
		return;

	std::vector<std::pair<int, int> >::iterator middle;
	middle = begin + (distance / 2);

	mergeSort_vector(begin, middle);
	mergeSort_vector(middle, end);
   std::inplace_merge(begin, middle, end);
}

void PmergeMe::insertSmaller_vector()
{
	int i = 0;
	int newtmp;
	int tmp = i - 1;
	int j = 0;
	int jacob = 0;
	int size = pairsVector.size();

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
			v.insert(std::lower_bound(v.begin(), v.end(), pairsVector[i].second), pairsVector[i].second);
			i--;
		}
		tmp = newtmp;
		j++;
	}
}

void PmergeMe::insertLarger_vector()
{
	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
	{
		if (it->first != -1)
			v.push_back(it->first);
	}

	for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
}

void PmergeMe::insertionSort_vector()
{
	insertLarger_vector();
	insertSmaller_vector();
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
	mergeSort_vector(pairsVector.begin(), pairsVector.end());

	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
		std::cout << it->first << " : " << it->second << std::endl;
	std::cout << "--------------" << std::endl;

	insertionSort_vector();
	time = clock() - time;

	if (std::is_sorted(v.begin(), v.end()) == true)
		std::cout << GREEN << "Time to process a range of " << v.size() << " elements with std::vector : " 
				<< std::fixed << (float)time / CLOCKS_PER_SEC << " sec" << RESET << std::endl;
	
	std::cout << "After : ";
	for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	return;
}


// utils

int printError(const std::string& msg, int i)
{
	std::cerr << msg << std::endl;
	return(i);
}
