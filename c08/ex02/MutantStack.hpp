#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RESET   "\033[0m"
# define CYAN 	"\033[36m"

# include <algorithm>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{

	public:
			MutantStack() : std::stack<T>() {};
			MutantStack<T>(MutantStack const & rhs) : std::stack<T>(rhs) {};
			MutantStack<T>& operator=(MutantStack const & rhs)
			{
				if (this != &rhs)
					std::stack<T>::operator=(rhs);
				return(*this);
			}
			virtual ~MutantStack<T>() {};

			typedef typename std::deque<T>::iterator iterator;
 
			iterator begin() { return (this->c.begin());}; //deque == underlying container accessible through protected variable c of stack
			iterator end() { return (this->c.end());};

};
# include "MutantStack.tpp"
#endif
