#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <exception>
# include <iostream>
# include <cstdlib>
# include <limits>

# define SIZE 10
class Span
{
	private:
			const unsigned int	_N;
			int					_shortSpan;
			int					_longSpan;
			std::vector<int>	_s;
			
			void sortSpan();
			void minSpan(std::vector<int>::iterator n);
			void maxSpan(int n);


			Span();
			Span(Span const & rhs);
			Span& operator=(Span const & rhs);
	public:
			Span(unsigned int N);
			virtual ~Span();

			void	addNumber(int n);

			unsigned int	shortestSpan();
			unsigned int	longestSpan();
};

#endif
