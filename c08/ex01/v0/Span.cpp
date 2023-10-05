#include "Span.hpp"

// canonical
Span::Span(unsigned int N) : _N(N), _shortSpan(0), _longSpan(0){}

Span::~Span() {}

// Member private

void Span::checkMinSpan(int n)
{
	if (!_s.size() || _s.size() == 1) 
		return;

	//search if *it - *it++ || *it - *it-- < shortestSpan

	std::multiset<int, std::less<int> >::iterator it = _s.find(n);

	std::multiset<int, std::less<int> >::iterator itMinus;
	std::multiset<int, std::less<int> >::iterator itPlus;
	
	int res, res1, res2;

	//check if it is last or first 
	if (it == _s.begin())
	{
		itPlus = it++;
		res = (*std::max(&(*it), &(*itPlus)) - *std::min(&(*it), &(*itPlus)));

		_shortSpan = abs(res);
		std::cout << "B : res Min " << _shortSpan << " for " << n << std::endl;
		return;
	}
	else if (it == _s.end())
	{
		itMinus = it--;
		res = (*std::max(&(*it), &(*itMinus)) - *std::min(&(*it), &(*itMinus)));
		
		std::cout << "E : " << *std::max(&(*it), &(*itMinus)) << " | " << *std::min(&(*it), &(*itMinus)) << std::endl;

		std::cout << "E : res Min " << res << " for " << n << std::endl;

	}
	else 
	{
		itPlus = it++;
		itMinus = it--;

		res1 = *std::max(&(*it), &(*itPlus)) - *std::min(&(*it), &(*itPlus));
		res2 = *std::max(&(*it), &(*itMinus)) - *std::min(&(*it), &(*itMinus));
		
		res = std::max(res1, res2);

		std::cout << "itPlus " << *itPlus << " | itMinus " << *itMinus << std::endl;
		std::cout << "M : " << (*std::max(&(*it), &(*itPlus))) - (*std::min(&(*it), &(*itPlus))) << " | " << *std::max(&(*it), &(*itMinus)) - *std::min(&(*it), &(*itMinus)) << std::endl;

		std::cout << "M : res Min " << res << " for " << n << std::endl;

	}
	
	std::cout << "res Min " << res << " for "<< n << std::endl;
	
	if (res < _shortSpan)
		_shortSpan = res;
	return;
}

void Span::checkMaxSpan(int n)
{
	if (!_s.size() || _s.size() == 1) 
		return;

	//search if *it - *it++ || *it - *it-- < shortestSpan

	std::multiset<int, std::less<int> >::iterator it = _s.find(n);
	std::multiset<int, std::less<int> >::iterator itFirst = _s.begin();
	std::multiset<int, std::less<int> >::iterator itLast = _s.end();
	
	int status = 0;
	int res, res1, res2;

	//check if it is last or first 
	if (it == itLast)
		status = 1;	
	if (it == itFirst)
		status = 2;
	
	switch (status)
	{
		case 1 : 
				res = std::max(&(*it), &(*itFirst)) - std::min(&(*it), &(*itFirst));
				break;
		case 2 :
				res = std::max(&(*it), &(*itLast)) - std::min(&(*it), &(*itLast));
				break;
		default :
				res1 = std::max(&(*it), &(*itFirst)) - std::min(&(*it), &(*itFirst));
				res2 = std::max(&(*it), &(*itLast)) - std::min(&(*it), &(*itLast));
				res = std::max(res1, res2);
	}
	if (res < _longSpan)
		_longSpan = res;
	return;
	//std::cout << "getSpans" << n << std::endl;
}

// Member public
void Span::addNumber(int n)
{
	try 
	{
		if (_s.size() < _N)
		{
			_s.insert(n);
			checkMinSpan(n);
			checkMaxSpan(n);
		}
		else
			throw Span::NMaxException();
	}
	catch (std::exception &e)
	{ 
		std::cout << e.what() << std::endl;
		for (std::multiset<int, std::less<int> >::iterator it = _s.begin();
				it != _s.end(); it++)
				std::cout << *it << " ";
		std::cout << std::endl;
	}
}

unsigned int Span::shortestSpan()
{
	try
	{
		//std::cout << _s.size() << std::endl;
		if (!_s.size() || _s.size() == 1)
			throw Span::SizeTooSmallException();	
	}
	catch(std::exception &e) { std::cout << e.what() << _s.size() << std::endl;}
	
	return (_shortSpan);
}

unsigned int Span::longestSpan()
{
	try
	{
		//std::cout << _s.size() << std::endl;
		if (!_s.size() || _s.size() == 1)
			throw Span::SizeTooSmallException();	
	}
	catch(std::exception &e) { std::cout << e.what() << _s.size() << std::endl;}
	
	return (_longSpan);
}

// Exception

const char *Span::NMaxException::what() const throw()
{
	return ("Span is full");
}

const char *Span::SizeTooSmallException::what() const throw()
{
	return ("Span size too small : size : ");
}
