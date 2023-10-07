#include "Span.hpp"

//canonical
Span::Span(unsigned int N) : _N(N) {}

Span::~Span() {}

//Member function public

void Span::printSpan()
{
	for (std::vector<int>::iterator it = _s.begin(); it != _s.end(); it++)
		std::cout << *it << " | ";
	std::cout << std::endl;
}

void Span::addNumber(int n)
{
	try 
	{
		if (_s.size() >= _N)
			throw std::length_error("Span is full");
		_s.push_back(n);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl;}
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	try 
	{
		for (std::vector<int>::iterator i = first; i < last; i++)
		{
			if (_s.size() >= _N)
				throw std::length_error("Span is full it: ");
			_s.push_back(*i);
		}
	}
	catch (std::exception &e) {std::cout << e.what() << std::endl;}

}

unsigned int Span::shortestSpan()
{
	try 
	{
		if (!_s.size() || _s.size() == 1)
			throw std::length_error("shortestSpan	: Span too small");

		int res = std::numeric_limits<int>::max();

		std::sort(_s.begin(), _s.end());

		for (size_t i = 0; i < _s.size() - 1; i++)
		{	
			size_t n = i; 
			n++;

			int t = abs(_s[n] - _s[i]);
			
			if (t < res)
				res = t;
		}
		return(res);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl;}
	return (0);
}

unsigned int Span::longestSpan()
{
		try 
	{
		if (!_s.size() || _s.size() == 1)
			throw std::length_error("shortestSpan	: Span too small");
		else
			return(*std::max_element(_s.begin(), _s.end()) - *std::min_element(_s.begin(), _s.end()));
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl;}
	return (0);
}
