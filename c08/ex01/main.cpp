#include "Span.hpp"

int main ()
{

	Span sp(SIZE);

	//Span empty
	sp.longestSpan();
	sp.shortestSpan();
	
	//Span 1 element
	sp.addNumber(66);
	sp.longestSpan();
	sp.shortestSpan();

	//Span full error
	for (int i = 0; i < SIZE + 1; i++)
		sp.addNumber(i);

	std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;

	return (0);
}
