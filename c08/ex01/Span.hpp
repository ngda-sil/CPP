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

		template <typename InputIt>
		void addNumber(InputIt first, InputIt last)
		{
			try 
			{
				for (InputIt i = first; i < last + 3; i++)
				{
					if (_s.size() > _N)
						throw std::length_error("Span is full");
					_s.push_back(*i);
				}
			}
			catch (std::exception &e) 
			{ 
				std::cout << e.what() << " : ";
				for (std::vector<int>::iterator it = _s.begin(); it != _s.end(); it++)
					std::cout << *it << " | ";	
				std::cout << std::endl;
			}

		}
			
			void	addNumber(int n);

			unsigned int	shortestSpan();
			unsigned int	longestSpan();
};

#endif
