#include "Span.hpp"

int main ()
{

	Span sp(5);

	//Span empty
	sp.longestSpan();
	sp.shortestSpan();
	
	//Span 1 element
	sp.addNumber(8);
	sp.longestSpan();
	sp.shortestSpan();

	//Span full error
	for (int i = 0; i < 5; i++)
	{
		sp.addNumber(rand() % 100);
		std::cout << "--------------------------\n" << std::endl;
	}

	std::cout << "longestSpan : " << sp.longestSpan() << std::endl;
	std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;



	return (0);
}
