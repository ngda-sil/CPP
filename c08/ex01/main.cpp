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
	for (int i = 0; i < SIZE + 1; i++)
		sp.addNumber(rand() % 100000000);

	std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
	//std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;

	return (0);
}
