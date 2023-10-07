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

	std::vector<int> a;
	a.push_back(12);
	a.push_back(1);
	a.push_back(-42);
	a.push_back(42);
	a.push_back(3);
	a.push_back(-122);
	a.push_back(55);

	Span sp2(50);

	sp2.addNumber(55);
	sp2.addNumber(a.begin(), a.begin() + 5);
	sp2.addNumber(15);


	sp2.printSpan();

	std::cout << "shortestSpan : " << sp2.shortestSpan() << std::endl;
	std::cout << "longestSpan : " << sp2.longestSpan() << std::endl;


	return (0);
}
