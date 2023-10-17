#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <sstream>
# include <utility>

class PmergeMe
{
	private :
			std::vector<int>	v;
			std::deque<int>	d;

			void	pairElements();

			PmergeMe(PmergeMe const & rhs);
			PmergeMe& operator=(PmergeMe const & rhs);

	public :
			PmergeMe();
			~PmergeMe();


			int		parseElements(char** av);
			void	sort();
};

int	printError(const std::string& msg, int i);

#endif
