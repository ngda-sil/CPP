#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <exception>
# include <iostream>
# include <limits>
# include <cstdlib>

# define SIZE 1000

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

			void	addNumber(int n);

			unsigned int	shortestSpan();
			unsigned int	longestSpan();
};

#endif
