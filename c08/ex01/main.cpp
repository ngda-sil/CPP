#include "Span.hpp"

int main ()
{

	Span sp(SIZE);

	//Span empty
	sp.longestSpan();
	sp.shortestSpan();
	
	//Span 1 element
	sp.addNumber(-10890);
	sp.longestSpan();
	sp.shortestSpan();

	//Span full error
	for (int i = 1; i < SIZE + 1 ; i++)
		sp.addNumber(rand() % 10);

	std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
	//std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;

	int a[] = {12, 1, -42, 42, 3, -122, 55};
	std::vector<int> v(a, a + sizeof(a) / sizeof(int));

	Span sp2(50);

	sp2.addNumber(55);
	sp2.addNumber(v.begin(), v.begin() + 5);
	sp2.addNumber(15);


	sp2.printSpan();

	std::cout << "shortestSpan : " << sp2.shortestSpan() << std::endl;
	std::cout << "longestSpan : " << sp2.longestSpan() << std::endl;


	return (0);
}
