#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <set>
# include <exception>
# include <iostream>
# include <cstdlib>

class Span
{
	private:
			const unsigned int					_N;
			int						_shortSpan;
			int						_longSpan;
			std::multiset<int, std::less<int> >	_s;
			
			void checkMinSpan(int n);
			void checkMaxSpan(int n);
			
			Span();
			Span(Span const & rhs);
			Span& operator=(Span const & rhs);
	public:
			Span(unsigned int N);
			virtual ~Span();

			void	addNumber(int n);

			unsigned int	shortestSpan();
			unsigned int	longestSpan();

			class	NMaxException : public std::exception
			{
				public:
			 			const char* what() const throw();
			};

			class	SizeTooSmallException : public std::exception
			{
				public:
			 			const char* what() const throw();
			};
};

#endif
