#include "PmergeMe.hpp"

// Canonical

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

// Private Member Function

void PmergeMe::pairsVector()
{
	// pair elements
	for (itV it = v.begin(); it < v.end(); it+= 2)
	{
		itV it2 = it;

		if (++it2 != v.end())
			pairsV.push_back(std::make_pair(*it, *it2));
		else
		{
			pairsV.push_back(std::make_pair(-1, *it));
			break;
		}
	}

	// sort pairs
	for (itPairsV it = pairsV.begin(); it != pairsV.end(); it++)
		if ((it->first < it->second) && (it->first != -1))
			std::swap(it->first, it->second);

	v.clear();
}

void PmergeMe::pairsDeque()
{
	// pair elements
	for (itD it = d.begin(); it < d.end(); it+= 2)
	{
		itD it2 = it;

		if (++it2 != d.end())
			pairsD.push_back(std::make_pair(*it, *it2));
		else
		{
			pairsD.push_back(std::make_pair(-1, *it));
			break;
		}
	}

	// sort pairs
	for (itPairsD it = pairsD.begin(); it != pairsD.end(); it++)
		if ((it->first < it->second) && (it->first != -1))
			std::swap(it->first, it->second);

	d.clear();
}

template <typename iterator>
void PmergeMe::mergeSort(iterator begin, iterator end)
{
	//base case 
	ptrdiff_t distance = std::distance(begin, end);
	if (distance <= 1)
		return;

	iterator middle;
	middle = begin + (distance / 2);

	mergeSort<iterator>(begin, middle);
	mergeSort<iterator>(middle, end);
   std::inplace_merge(begin, middle, end);
}

// fonction non securise mais ne pas utiliser avec n > 32 sinon on sort du int max
int PmergeMe::jacobsthal(int n)
{
	int j;

	if (n == 0)
		return(0);
	else if (n == 1)
		return (1);
	else 
	{
		j = jacobsthal(n - 1) + (2 * jacobsthal(n - 2));
		return(j);
	}
}

void PmergeMe::insertionSortVector()
{
	//insert larger
	for (itPairsV it = pairsV.begin(); it != pairsV.end(); it++)
		if (it->first != -1)
			v.push_back(it->first);

	//insert smaller
	int i = 0;
	int newtmp;
	int tmp = i - 1;
	int n = 0;
	int jacob = 0;

	for (int size = pairsV.size(); jacob < size; n++)
	{
		jacob = jacobsthal(n);
		i = jacob >= size ? size - 1 : jacob; 
		newtmp = i;

		for (; i > tmp; --i)
			v.insert(std::lower_bound(v.begin(), v.end(), pairsV[i].second), pairsV[i].second);

		tmp = newtmp;
	}
}

void PmergeMe::insertionSortDeque()
{
	//insert larger
	for (itPairsD it = pairsD.begin(); it != pairsD.end(); it++)
		if (it->first != -1)
			d.push_back(it->first);

	//insert smaller
	int i = 0;
	int newtmp;
	int tmp = i - 1;
	int	n = 0;
	int jacob = 0;

	for (int size = pairsD.size(); jacob < size; n++)
	{
		jacob = jacobsthal(n);
		i = jacob >= size ? size - 1 : jacob; 
		newtmp = i;

		for (; i > tmp; --i)
			d.insert(std::lower_bound(d.begin(), d.end(), pairsD[i].second), pairsD[i].second);

		tmp = newtmp;
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

	// check if unsorted positive int + push_back() 
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

	printVector("Before	:");

	return (0);
}

void PmergeMe::sortVector()
{
	clock_t time = clock();

	pairsVector();
	mergeSort<itPairsV>(pairsV.begin(), pairsV.end());
	insertionSortVector();

	time = clock() - time;

	printVector("After : ");

	if (std::is_sorted(v.begin(), v.end()) == true)
		std::cout << GREEN << "Time to process a range of " << v.size() << " elements with std::vector : " 
				<< std::fixed << (float)time / CLOCKS_PER_SEC << " sec" << RESET << std::endl;
	

	return;
}

void PmergeMe::sortDeque()
{
	clock_t time = clock();

	pairsDeque();
	mergeSort<itPairsD>(pairsD.begin(), pairsD.end());
	insertionSortDeque();

	time = clock() - time;

	if (std::is_sorted(d.begin(), d.end()) == true)
		std::cout << GREEN << "Time to process a range of " << v.size() << " elements with std::deque : " 
				<< std::fixed << (float)time / CLOCKS_PER_SEC << " sec" << RESET << std::endl;

	return;
}


// utils

int printError(const std::string& msg, int i)
{
	std::cerr << msg << std::endl;
	return(i);
}

void PmergeMe::printVector(const std::string& comment)
{
	std::cout << comment;
	for(itV it = v.begin(); it != v.end() ; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

	// for (itPairsV it = pairsV.begin(); it != pairsV.end(); it++)
	// 	std::cout << it->first << " : " << it->second << std::endl;
	// std::cout << "--------------" << std::endl;

