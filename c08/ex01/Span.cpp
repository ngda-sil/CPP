#include "Span.hpp"

// canonical
Span::Span(unsigned int N) : _N(N), _shortSpan(std::numeric_limits<int>::max()), _longSpan(0){}

Span::~Span() {}

	

// Member private

void Span::sortSpan()
{
	if (_s.size() > 1)
		std::sort(_s.begin(), _s.end());
}

void Span::maxSpan(int n)
{
	for (std::vector<int>::iterator it = _s.begin(); it != _s.end() - 1; it++)
		if (abs(*it -n) < _longSpan)
			_longSpan = abs(*it -n);
}

void Span::minSpan(std::vector<int>::iterator n)
{
	for (std::vector<int>::iterator it = _s.begin(); it != _s.end() - 1; it++)
		if (abs(*it - *n) < _shortSpan)
			_shortSpan = abs(*it - *n);
}

// Member public
void Span::addNumber(int n)
{
	try 
	{
		if (_s.size() < _N)
			_s.push_back(n);
		else
			throw std::length_error("Span is full");
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << " : ";
		for (std::vector<int>::iterator it = _s.begin();
				it != _s.end(); it++)
				std::cout << *it << " ";
		std::cout << std::endl;
	}
}

unsigned int Span::shortestSpan()
{
	try
	{
		if (!_s.size() || _s.size() == 1)
			throw std::length_error("shortestSpan	: size too small : ");
		
		for (std::vector<int>::iterator it = _s.begin(); it != _s.end() - 1; it++)
		{
			// for(std::vector<int>::iterator it = _s.begin(); it != _s.end(); it++)
			// 	std::cout << *it << " ";
			// std::cout << std::endl;
			
			if (abs(*(it + 1) - *it) < _shortSpan)
			{
				std::cout << "Before " << _shortSpan << "\n";
				_shortSpan = abs(*it - *(_s.end()-1));
				std::cout << "After " << _shortSpan << "\n";

			}
		}

	// if (_s.size() > 1 )
	// {//print vector
	// }
	}
	catch(std::exception &e) { std::cout << e.what() << _s.size() << std::endl;}
	
	return (_shortSpan);
}

unsigned int Span::longestSpan()
{
	try
	{
		if (!_s.size() || _s.size() == 1)
			throw std::length_error("longestSpan	: size too small : ");

		for (std::vector<int>::iterator it = _s.begin(); it != _s.end() - 1; it++)
			if (abs(*it - *(_s.end()-1)) > _longSpan)
				_longSpan = abs(*it - *(_s.end()-1));
	}
	catch(std::exception &e) { std::cout << e.what() << _s.size() << std::endl;}

	return (_longSpan);
}
