#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# define GREEN "\033[32m"
# define RESET "\033[0m"

# include <sstream>
# include <iostream>
# include <vector>
# include <deque>
# include <iomanip>
# include <ctime>
# include <utility>

class PmergeMe
{
	private :
			std::vector<int>			v;
			std::vector<std::pair<int, int> > pairsVector;

			void	pairElements_vector();
			void	sortPairs_vector();

			std::deque<int>		d;

			PmergeMe(PmergeMe const & rhs);
			PmergeMe& operator=(PmergeMe const & rhs);

	public :
			PmergeMe();
			~PmergeMe();


			int		parseElements(char** av);
			void	sort_vector();
			// void	sort_deque();

};

int	printError(const std::string& msg, int i);

#endif
