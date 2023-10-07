#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <exception>
# include <iostream>
# include <limits>
# include <cstdlib>
# include <memory>
# include <iterator>

# define SIZE 10

class Span
{
	private:
			const unsigned int	_N;
			std::vector<int>	_s;

			Span();
			Span(Span const & rhs);
			Span& operator=(Span const & rhs);
	public:
			Span(unsigned int N);
			~Span();

			void addNumber(int n);
			void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);

			unsigned int	shortestSpan();
			unsigned int	longestSpan();

			void printSpan();
};

#endif
