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
	// for (std::vector<std::pair<int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
	// std::cout << "--------------" << std::endl;
}

void PmergeMe::pairElements_deque()
{
	for (std::deque<int>::iterator it = d.begin(); it <= d.end() - 1; it++)
	{
		std::deque<int>::iterator it2 = it;

		if (++it2 == d.end())
		{
			pairsDeque.push_back(std::make_pair(-1, *it));
			break;
		}

		pairsDeque.push_back(std::make_pair(*it++, *it2));
	}
	d.clear();
	// for (std::deque<std::pair<int, int > >::iterator it = pairsDeque.begin(); it != pairsDeque.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
	// std::cout << "--------------" << std::endl;
}

void PmergeMe::sortPairs_vector()
{
	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
		if ((it->first < it->second) && (it->first != -1) && (it->second != -1))
			std::swap(it->first, it->second);


	// for (std::vector<std::pair<int, int > >::iterator it = pairs.begin(); it != pairs.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
}

void PmergeMe::sortPairs_deque()
{
	for (std::deque<std::pair<int, int > >::iterator it = pairsDeque.begin(); it != pairsDeque.end(); it++)
		if ((it->first < it->second) && (it->first != -1))
			std::swap(it->first, it->second);

	for (std::deque<std::pair<int, int > >::iterator it = pairsDeque.begin(); it != pairsDeque.end(); it++)
	{
		if (it->first == -1)
		{
			std::sort(pairsDeque.begin(), pairsDeque.end() - 1);
			break;
		}
		if (++it == pairsDeque.end())
		{
			std::sort(pairsDeque.begin(), pairsDeque.end());
			break;
		}
	}
	// for (std::deque<std::pair<int, int > >::iterator it = pairsDeque.begin(); it != pairsDeque.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
}


void PmergeMe::mergeLarger_vector()
{
	for (std::vector<std::pair<int, int > >::iterator it = pairsVector.begin(); it != pairsVector.end(); it++)
	{
		if (it->first != -1)
			v.push_back(it->first);
	}
	v.insert(v.begin(), pairsVector.begin()->second);
	// std::cout << "Vector : ";
	// for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
	// 	std::cout << *it << " | ";
	// std::cout << std::endl;
}

void PmergeMe::mergeLarger_deque()
{
	for (std::deque<std::pair<int, int > >::iterator it = pairsDeque.begin(); it != pairsDeque.end(); it++)
	{
		if (it->first != -1)
			d.push_back(it->first);
	}
	d.insert(d.begin(), pairsDeque.begin()->second);
	// std::cout << "Vector : ";
	// for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
	// 	std::cout << *it << " | ";
	// std::cout << std::endl;
}

void PmergeMe::mergeSmaller_vector()
{
	int i = 0;
	int newtmp;
	int tmp = i;
	int j = 2;
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
	std::cout << "Vector : ";
	for(std::vector<int>::iterator it = v.begin(); it != v.end() ; it++)
		std::cout << *it << " | ";
	std::cout << " SIZE : " << v.size() << std::endl;
}

void PmergeMe::mergeSmaller_deque()
{
	int i = 0;
	int newtmp;
	int tmp = i;
	int j = 2;
	int jacob = 0;
	int size = pairsDeque.size();

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
			d.insert(std::lower_bound(d.begin(), d.end(), pairsDeque[i].second), pairsDeque[i].second);
			i--;
		}
		tmp = newtmp;
		j++;
	}
	std::cout << "Deque : ";
	for(std::deque<int>::iterator it = d.begin(); it != d.end() ; it++)
		std::cout << *it << " | ";
	std::cout << " SIZE : " << d.size() << std::endl;
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
	for(std::deque<int>::iterator it = d.begin(); it != d.end() ; it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
	return (0);
}


void PmergeMe::sort_vector()
{
	clock_t time = clock();
	pairElements_vector();
	sortPairs_vector();
	mergeLarger_vector();
	mergeSmaller_vector();
	time = clock() - time;
	if (std::is_sorted(v.begin(), v.end()) == true)
		std::cout << GREEN << "Time to process a range of " << v.size() << " elements with std::vector : " 
				<< (float)time / CLOCKS_PER_SEC << " sec" << RESET << std::endl;
	return;
}

void PmergeMe::sort_deque()
{
	clock_t time = clock();
	pairElements_deque();
	sortPairs_deque();
	mergeLarger_deque();
	mergeSmaller_deque();
	time = clock() - time;
	if (std::is_sorted(d.begin(), d.end()) == true)
		std::cout << GREEN << "Time to process a range of " << d.size() << " elements with std::deque : " 
			<< (float)time / CLOCKS_PER_SEC << " sec"<< RESET << std::endl;
	return;
}

// utils


int printError(const std::string& msg, int i)
{
	std::cerr << msg << std::endl;
	return(i);
}
