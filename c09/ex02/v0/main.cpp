#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>

	// std::cout << "Vector : ";
	// for(std::vector<unsigned int>::iterator it = fja.v.begin(); it != fja.v.end() ; it++)
	// 	std::cout << *it << " | ";
	// std::cout << std::endl;

	// std::cout << "Deque : ";
	// for(std::deque<unsigned int>::iterator it = fja.d.begin(); it != fja.d.end(); it++)
	// 	std::cout << *it << " | ";
	// std::cout << std::endl;

int main (int ac, char** av)
{
	PmergeMe	fja;

	if (ac < 2)
		return(printError("Usage: ./PmergeMe <unsorted positive integer sequence>", 1));

	if (fja.parseElements(av))
		return(printError("Usage: ./PmergeMe <UNSORTED POSITIVE INTEGER sequence>", 1));
	
	fja.sort_vector();
	fja.sort_deque();

	return(0);
}
