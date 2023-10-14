#ifndef PMERGEME_HPP
# define PMERGEME_HPP

class PmergeMe
{
	private :

	public :
			PmergeMe();
			PmergeMe(PmergeMe const & rhs);
			PmergeMe& operator=(PmergeMe const & rhs);
			~PmergeMe();
};

#endif
