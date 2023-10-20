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
			std::vector<int>					v;
			std::vector<std::pair<int, int > >	pairsVector;
			
			std::deque<int>						d;
			std::deque<std::pair<int, int > >	pairsDeque;

			void	pairElements_vector();
			void	sortPairs_vector();
			void 	mergeLarger_vector();
			void 	mergeSmaller_vector();

			void	pairElements_deque();
			void	sortPairs_deque();
			void 	mergeLarger_deque();
			void 	mergeSmaller_deque();


			PmergeMe(PmergeMe const & rhs);
			PmergeMe& operator=(PmergeMe const & rhs);

	public :
			PmergeMe();
			~PmergeMe();


			int		parseElements(char** av);
			void	sort_vector();
			void	sort_deque();

};

int	printError(const std::string& msg, int i);

#endif
