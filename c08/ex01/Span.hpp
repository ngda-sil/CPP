#ifndef SPAN_HPP
# define SPAN_HPP

# include "algorithm"

class Span
{
	private:
			const unsigned int _N;

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

