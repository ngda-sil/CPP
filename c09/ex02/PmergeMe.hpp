#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <sstream>
# include <utility>
# include <algorithm>
# include <cmath>
# include <ctime>

class PmergeMe
{
	private :
			std::vector<int>	v;
			std::deque<int>		d;
			std::vector<std::pair<int, int > > pairs;
			clock_t time;


			void	pairElements();
			void	sortPairs();
			void 	mergeLarger();
			void 	mergeSmaller();


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
