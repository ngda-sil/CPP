#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	fja;

	if (ac < 2)
		return (printError("Usage: ./PmergeMe <unsorted positive integer sequence>", 1));

	if (fja.parseElements(av))
		return (1);

	fja.sortVector();
	fja.sortDeque();
	
	return(0);
}
