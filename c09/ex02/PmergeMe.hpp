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
# include <cstddef>
# include <iterator>
# include <functional>

typedef std::vector<int>::iterator itV;
typedef std::deque<int>::iterator itD;
typedef std::vector<std::pair<int, int> >::iterator itPairsV;
typedef std::deque<std::pair<int, int> >::iterator itPairsD;

class PmergeMe
{
	private :
			std::vector<int>					v;
			std::vector<std::pair<int, int> >	pairsV;

			void	pairsVector();
			void	insertionSortVector();
			void 	printVector(const std::string& comment);

			std::deque<int>						d;
			std::deque<std::pair<int, int> >	pairsD;

			void	pairsDeque();
			void	insertionSortDeque();

			template <typename iterator>
			void	mergeSort(iterator begin, iterator end);


			PmergeMe(PmergeMe const & rhs);
			PmergeMe& operator=(PmergeMe const & rhs);

	public :
			PmergeMe();
			~PmergeMe();

			int 	jacobsthal(int n);
			int		parseElements(char** av);
			void	sortVector();
			void	sortDeque();

};

int	printError(const std::string& msg, int i);

#endif
